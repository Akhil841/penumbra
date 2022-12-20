# Umbra class documentation
## Rationale
C++ has no class hierarchy, the way C# does. If C++ had a class similar to C#'s `object` datatype, which acts as a superclass for all classes and contains a `equals()` method to compare any object to any other object, in `PTester::assertEqual(Umbra & actual, Umbra & expected, int line)`, then we could just replace `Umbra` with `object` and call it a day, instead of making a separate `Umbra` class. Since C++ has no equivalent to `object`, this class exists instead.

You might be thinking that passing the `PTester` a class argument via templates would solve the problem fairly easily. This would only work if the passed class has a method to compare it to that always has the same name, which is a bit of an annoying restriction to place on a programmer. On top of that, using class arguments would *only* allow the `PTester` to compare certain objects.

Since C++ has no super class, I decided to make my own, the `Umbra`. The reason it's called an umbra is because an umbra is the part of the shadow inside of a penumbra, and together they make a full shadow. Similarly, all the `Umbra`s are inside of this penumbra, and both require the other to form a full unit tester.
## Usage notes
Any class that you wish to use in a `PTester` has to inherit the class `Umbra`. In addition, it must declare the method `bool equals(void* other)` with a custom definition, or else it will use the default `equals()` defined in `penumbra/umbra.h`, which always returns `true`.
### Example
Suppose I have the following class `MyInt`:
```
class MyInt
{
    public:
        MyInt()
        {
            val = 0;
        }
        MyInt(int val)
        {
            this->val = val;
        }
        MyInt sum(MyInt other)
        {
            MyInt out(this->val + other.val);
            return out;
        }
    private:
        int val;
};
```
and I wanted to make it usable by the PTester. To do this, I would make it inherit `Umbra` and add the `equals` method, for the following final result:
```
class MyInt : public Umbra
{
    public:
        MyInt()
        {
            val = 0;
        }
        MyInt(int val)
        {
            this->val = val;
        }
        MyInt sum(MyInt other)
        {
            MyInt out(this->val + other.val);
            return out;
        }
        bool equals(void* other)
        {
            //convert the void* to a MyInt*. If 
            //the void* was not originally a MyInt*,
            //then it is very unlikely that it will equal
            //this MyInt.
            MyInt* o = (MyInt*) other;
            //compare their values.
            return this->val == o->val;
        }
    private:
        int val;
};
```
The `equals()` method has a custom definition that one might use in practice.

## Member functions
- `bool equals(void* other)`
    - Used for comparison by the `PTester`. By default, always returns `true`. Classes that inherit `Umbra` should override this method for accurate comparison.
