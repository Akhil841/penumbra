# penumbra
Me: Mom, can we have JUnit?<br><br>
Mom: No, we have JUnit at home.<br><br>
JUnit at home:<br><br>

This isn't meant to be anything complex, it's just the testing framework I made for personal use in C++.
## Rationale
Inspired by Japanese game developers before me (see: Fate/stay night, Metal Gear), I have chosen to name this project after something that sounds cool! More importantly, the word penumbra means "the shadow cast by the earth or moon over an area experiencing a partial eclipse", which is a reference to the shadow that the C++ unit tester worth using, [Catch2](https://github.com/catchorg/Catch2), casts on this program.<br><br>
Despite the fact that `Catch2` already exists, I have chosen to make this program because (1) I wanted the experience of determining how to handle generic objects despite the fact that C++ has no overarching type hierarchy like C# (I know that templates exist, but using them would make my code less flexible), (2) I wanted to practice automatic code generation (I refused to write all of those `assertEqual` functions for different datatypes by hand) because compilers are really interesting and I plan on taking CSE 131, UCSD's compiler class, in spring 2023, and because (3) I was bored.
## Dependencies
Penumbra uses `std::vector`, `std::string`, and `std::iostream`. Any C++ compiler should have all of these, but in the very off chance that someone wrote their own C++ compiler, they should know that they need to have these dependencies if they want to use Penumbra.
## Usage
### How to use the `PTester` class to test your code
See the `doc` folder for documentation on `PTester`, `Umbra`, and more!
### How to compile code that uses Penumbra
Just add `path/to/penumbra/ptester.cpp` to your compilation command, where `path/to/penumbra` is the location of the `penumbra` folder, relative to your project's root directory. Also, make sure to add "`#include "penumbra/penumbra.h"`" to files that have Penumbra tests.
