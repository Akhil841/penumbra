#include "penumbra/penumbra.h"

class MyInt : public Umbra
{
    public:
        MyInt()
        {
            t = 0;
        }
        MyInt(int t)
        {
            this->t = t;
        }
        MyInt sum(MyInt other)
        {
            MyInt out(this->t + other.t);
            return out;
        }
        bool equals(void* other)
        {
            //cast void pointer to pointer of Umbra derivative MyInt
            //if other is not originally a MyInt*, it is very unlikely to be equal to this
            MyInt* o = (MyInt*) other;
            return this->t == o->t;
        }
        int t;
};

int
main()
{
    PTester pt(__FILE__);
    MyInt a(10);
    MyInt b(15);
    pt.assertEqual(a, b, __LINE__);
    pt.assertEqual(a, b, __LINE__, "custom message for T's a and b");
    pt.assertEqual(a, a, __LINE__);
    MyInt asum = a.sum(b);
    MyInt bsum = b.sum(a);
    pt.assertEqual(asum, bsum, __LINE__, "should be equal");
    //v must be a vector of Umbra
    std::vector<Umbra> v;
    pt.assertEmpty(v, __LINE__);
    v.push_back(a);
    pt.assertEmpty(v, __LINE__);
    pt.assertEmpty(v, __LINE__, "this should not be empty");
    return 0;
}