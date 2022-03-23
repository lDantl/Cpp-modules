#pragma once

template <class T>

class Array
{
    private;
        unsigned int    i;
        T   *arr;
    
    public:
        Array() : len(0), arr(NULL) {}

        Array(unsigned int len) : len(len)
        {
            if (len > 0)
                arr = new T[len];
            else
                arr = NULL;
        }

        ~Array()
        {
            delete [] arr;
        }


};