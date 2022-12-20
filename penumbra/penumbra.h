#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "umbra.h"

class PTester
{
    public:
        PTester();
        PTester(std::string filename);
        ~PTester();
        //bool
        void assertEqual(bool actual, bool expected, int line);
        void assertEqual(bool actual, bool expected, int line, std::string message);
        void assertTrue(bool test, int line);
        void assertTrue(bool test, int line, std::string message);
        void assertFalse(bool test, int line);
        void assertFalse(bool test, int line, std::string message);
        //char
        void assertEqual(char actual, char expected, int line);
        void assertEqual(char actual, char expected, int line, std::string message);
        void assertZero(char test, int line);
        void assertZero(char test, int line, std::string message);
        //short
        void assertEqual(short actual, short expected, int line);
        void assertEqual(short actual, short expected, int line, std::string message);
        void assertZero(short test, int line);
        void assertZero(short test, int line, std::string message);
        //int
        void assertEqual(int actual, int expected, int line);
        void assertEqual(int actual, int expected, int line, std::string message);
        void assertZero(int test, int line);
        void assertZero(int test, int line, std::string message);
        //double
        void assertEqual(double actual, double expected, int line);
        void assertEqual(double actual, double expected, int line, std::string message);
        void assertZero(double test, int line);
        void assertZero(double test, int line, std::string message);
        //long
        void assertEqual(long actual, long expected, int line);
        void assertEqual(long actual, long expected, int line, std::string message);
        void assertZero(long test, int line);
        void assertZero(long test, int line, std::string message);
        //long long
        void assertEqual(long long actual, long long expected, int line);
        void assertEqual(long long actual, long long expected, int line, std::string message);
        void assertZero(long long test, int line);
        void assertZero(long long test, int line, std::string message);
        //string
        void assertEqual(std::string actual, std::string expected, int line);
        void assertEqual(std::string actual, std::string expected, int line, std::string message);
        //Umbra
        void assertEqual(Umbra & actual, Umbra & expected, int line);
        void assertEqual(Umbra & actual, Umbra & expected, int line, std::string message);
        //vector<Umbra>
        void assertEqual(std::vector<Umbra> & actual, std::vector<Umbra> & expected, int line);
        void assertEqual(std::vector<Umbra> & actual, std::vector<Umbra> & expected, int line, std::string message);
        void assertEmpty(std::vector<Umbra> & test, int line);
        void assertEmpty(std::vector<Umbra> & test, int line, std::string message);
        //void*
        void assertNull(void* test, int line);
        void assertNull(void* test, int line, std::string message);
    private:
        std::vector<std::string> errormsgs;
        std::string filename;
        int passed;
};