#include "penumbra.h"

PTester::PTester()
{
    filename = "";
    passed = 0;
}

PTester::PTester(std::string filename)
{
    this->filename = filename;
    passed = 0;
}

PTester::~PTester()
{
    std::cerr << "Penumbra testing results: " << std::endl;
    if (!errormsgs.size())
    {
        std::cerr << "Passed all " << std::to_string(passed) << " tests." << std::endl;
        return;
    }
    std::cerr << "ERRORS!!!!!!!!!!!!!!" << std::endl;
    if (filename == "")
        filename = "Unknown file";
    for (int i = 0; i < errormsgs.size(); i++)
    {
        std::cerr << "Error " << (i + 1) << " of " << errormsgs.size() << ": " << std::endl;
        std::cerr << filename << ": line " << errormsgs[i] << std::endl;
    }
    std::cerr << "Passed " << std::to_string(passed) << " of " << std::to_string(passed + errormsgs.size()) << " tests." << std::endl;
}

void PTester::assertEqual(bool actual, bool expected, int line)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected " + (expected ? "true" : "false") + ", was actually " + (actual ? "true" : "false"));
}

void PTester::assertEqual(bool actual, bool expected, int line, std::string message)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertTrue(bool test, int line)
{
    if (test)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected true, was false");
}

void PTester::assertTrue(bool test, int line, std::string message)
{
    if (test)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertFalse(bool test, int line)
{
    if (!test)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected false, was true");
}

void PTester::assertFalse(bool test, int line, std::string message)
{
    if (!test)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(char actual, char expected, int line)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected " + std::to_string(expected) + ", but was actually " + std::to_string(actual));
}

void PTester::assertEqual(char actual, char expected, int line, std::string message)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertZero(char test, int line)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected 0, but was actually " + std::to_string(test));
}

void PTester::assertZero(char test, int line, std::string message)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(short actual, short expected, int line)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected " + std::to_string(expected) + ", but was actually " + std::to_string(actual));
}

void PTester::assertEqual(short actual, short expected, int line, std::string message)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertZero(short test, int line)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected 0, but was actually " + std::to_string(test));
}

void PTester::assertZero(short test, int line, std::string message)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(int actual, int expected, int line)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected " + std::to_string(expected) + ", but was actually " + std::to_string(actual));
}

void PTester::assertEqual(int actual, int expected, int line, std::string message)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertZero(int test, int line)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected 0, but was actually " + std::to_string(test));
}

void PTester::assertZero(int test, int line, std::string message)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(double actual, double expected, int line)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected " + std::to_string(expected) + ", but was actually " + std::to_string(actual));
}

void PTester::assertEqual(double actual, double expected, int line, std::string message)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertZero(double test, int line)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected 0, but was actually " + std::to_string(test));
}

void PTester::assertZero(double test, int line, std::string message)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(long actual, long expected, int line)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected " + std::to_string(expected) + ", but was actually " + std::to_string(actual));
}

void PTester::assertEqual(long actual, long expected, int line, std::string message)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertZero(long test, int line)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected 0, but was actually " + std::to_string(test));
}

void PTester::assertZero(long test, int line, std::string message)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(long long actual, long long expected, int line)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected " + std::to_string(expected) + ", but was actually " + std::to_string(actual));
}

void PTester::assertEqual(long long actual, long long expected, int line, std::string message)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertZero(long long test, int line)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected 0, but was actually " + std::to_string(test));
}

void PTester::assertZero(long long test, int line, std::string message)
{
    if (test == 0)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(std::string actual, std::string expected, int line)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected \"" + expected + "\", but was actually \"" + actual + "\"");
}

void PTester::assertEqual(std::string actual, std::string expected, int line, std::string message)
{
    if (actual == expected)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(Umbra & actual, Umbra & expected, int line)
{
    if (actual.equals(&expected))
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Actual value differs from expected value");
}

void PTester::assertEqual(Umbra & actual, Umbra & expected, int line, std::string message)
{
    if (actual.equals(&expected))
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEqual(std::vector<Umbra> & actual, std::vector<Umbra> & expected, int line)
{
    if (actual.size() == expected.size())
    {
        for (int i = 0; i < actual.size(); i++)
        {
            if (!actual[i].equals(&expected[i]))
            {
                errormsgs.push_back(std::to_string(line) + ": Actual value differs from expected value");
                return;
            }
            return;
        }
    }
    errormsgs.push_back(std::to_string(line) + ": Actual value differs from expected value (expected size " + std::to_string(expected.size()) + ", actual size " + std::to_string(actual.size()) + ")");
}

void PTester::assertEqual(std::vector<Umbra> & actual, std::vector<Umbra> & expected, int line, std::string message)
{
    if (actual.size() == expected.size())
    {
        for (int i = 0; i < actual.size(); i++)
        {
            if (!actual[i].equals(&expected[i]))
            {
                errormsgs.push_back(std::to_string(line) + ": " + message);
                return;
            }
            return;
        }
    }
    errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertEmpty(std::vector<Umbra> & test, int line)
{
    if (!test.size())
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Vector had " + std::to_string(test.size()) + " element(s) (not empty)");
}

void PTester::assertEmpty(std::vector<Umbra> & test, int line, std::string message)
{
    if (!test.size())
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}

void PTester::assertNull(void* test, int line)
{
    if (test == nullptr)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": Expected null pointer, was not");  
}

void PTester::assertNull(void* test, int line, std::string message)
{
    if (test == nullptr)
        passed++;
    else
        errormsgs.push_back(std::to_string(line) + ": " + message);
}