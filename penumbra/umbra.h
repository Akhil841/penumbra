#pragma once
#include <iostream>
class Umbra
{
    public:
        bool equals(void* other)
        {
            //Compare an Umbra to another object.
            //Override this as such
            //class YourClass : public Umbra
            //{
            //      public:
            //          //code...
            //          bool equals(void* other)
            //          {
            //              YourClass* o = (YourClass*) other;
            //              //code...
            //          }
            //}
            return true;
        };
};