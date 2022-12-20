# PTester class documentation
## Rationale
The `PTester` class contains the actual tester, its methods, and the destructor that prints out all the errors. I wanted to do something like JUnit where the test methods don't come from an object, but I don't think that that would be very flexible.
## Member functions:
### Declaration functions
- (constructor)
    - `PTester::PTester()`
        - Empty constructor. The only disadvantage between using this and the other constructor is that using this one will not print the input `std::string`, meant to be the testing file's name, when an error is printed.
    - `PTester::PTester(std::string filename)`
        - Constructor that takes a `std::string` as input. This string is supposed to be the name of the file that has the declared `PTester` in it.
- (destructor)
    - Prints all errors, or "Passed all \<numtests\> tests", where \<numtests\> is the number of tests in the testing file.
### Equality Testing
- `void PTester::assertEqual(bool actual, bool expected, int line)`
- `void PTester::assertEqual(char actual, char expected, int line)`
- `void PTester::assertEqual(short actual, short expected, int line)`
- `void PTester::assertEqual(int actual, int expected, int line)`
- `void PTester::assertEqual(double actual, double expected, int line)`
- `void PTester::assertEqual(long actual, long expected, int line)`
- `void PTester::assertEqual(long long actual, long long expected, int line)`
- `void PTester::assertEqual(std::string actual, std::string expected, int line)`
- `void PTester::assertEqual(Umbra actual, Umbra expected, int line)`
- `void PTester::assertEqual(vector<Umbra> actual, vector<Umbra> expected, int line)`
    - All of these methods test equality between various objects, and they print the error message "`filename`: line `line`: Expected `expected`, but was actually `actual`" if the test fails.
- `void PTester::assertEqual(bool actual, bool expected, int line, std::string message)`
- `void PTester::assertEqual(char actual, char expected, int line, std::string message)`
- `void PTester::assertEqual(short actual, short expected, int line, std::string message)`
- `void PTester::assertEqual(int actual, int expected, int line, std::string message)`
- `void PTester::assertEqual(double actual, double expected, int line, std::string message)`
- `void PTester::assertEqual(long actual, long expected, int line, std::string message)`
- `void PTester::assertEqual(long long actual, long long expected, int line, std::string message)`
- `void PTester::assertEqual(std::string actual, std::string expected, int line, std::string message)`
- `void PTester::assertEqual(Umbra actual, Umbra expected, int line, std::string message)`
- `void PTester::assertEqual(vector<Umbra> actual, vector<Umbra> expected, int line, std::string message)`
    - All of these methods test equality between various objects, and they print the error message "`filename`: line `line`: `message`" if the test fails.
### Boolean value testing
- `void assertTrue(bool test, int line);`
- `void assertFalse(bool test, int line);`
    - These test the value of the Boolean `test`, and print the error "`filename`: line `line`: Expected `!test`, was actually `test`" if they fail.
- `void assertTrue(bool test, int line, std::string message);`
- `void assertFalse(bool test, int line, std::string message);`
    - These test the value of the Boolean `test`, and print the error "`filename`: line `line`: `message`" if they fail.
### Numerical value zero checking
- `void assertZero(char test, int line);`
- `void assertZero(short test, int line);`
- `void assertZero(int test, int line);`
- `void assertZero(double test, int line);`
- `void assertZero(long test, int line);`
- `void assertZero(long long test, int line);`
    - All of these methods check if a given numerical input equals 0, and they print the error message "`filename`: line `line`: Expected 0, but was actually `test`" if the test fails.
- `void assertZero(char test, int line, std::string message);`
- `void assertZero(short test, int line, std::string message);`
- `void assertZero(int test, int line, std::string message);`
- `void assertZero(double test, int line, std::string message);`
- `void assertZero(long test, int line, std::string message);`
- `void assertZero(long long test, int line, std::string message);`
    - All of these methods check if a given numerical input equals 0, and they print the error message "`filename`: line `line`: `message`" if the test fails.
### Vector size checking
- `void assertEmpty(std::vector<Umbra> & test, int line);`
    - This method checks if a vector of [Umbra](umbra.md) is empty, and prints the error message "`filename`: line `line`: Vector had `test.size()` element(s) (not empty)" if the test fails.
- `void assertEmpty(std::vector<Umbra> & test, int line, std::string message);`
    - This method checks if a vector of [Umbra](umbra.md) is empty, and prints the error message "`filename`: line `line`: `message`" if the test fails.
### Pointer null checking
- `void assertNull(void* test, int line);`
    - This method checks if `test` is equal to `nullptr`, and prints the error message "`filename`: line `line`: Expected null pointer, was not" if the test fails.
- `void assertNull(void* test, int line, std::string message);`
    - This method checks if `test` is equal to `nullptr`, and prints the error message "`filename`: line `line`: message" if the test fails.
## Member objects
- `std::vector<std::string> errormsgs`
    - The `std::vector` in which all the error messages are stored.
- `std::string filename`
    - The name of the file from which this program is being run, unless the empty constructor is used, in which case this variable is an empty string until errors, until all errors are printed, in which case this variable contains the string "Unknown file".
- `int passed`
    - A running count of the number of tests the `PTester` has passed.