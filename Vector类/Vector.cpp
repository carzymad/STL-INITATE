#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector()
{
    arry = new int[LENGTH+2];
    Size = 0;
    Length = LENGTH;
}

Vector::Vector(Vector &tmp)
{
    Size = tmp.Size;
    Length = tmp.Length;
    arry = new int[Length];
    for (int i = 0; i < tmp.size(); i++)
        arry[i] = tmp[i];
}

Vector::~Vector()
{
    //dtor
}

int Vector::size()
{
    return Size;
}

void Vector::push_back(int num)
{
    Size++;
    if (num > Length)
    {
        Vector tmp = *this;
        delete arry;
        arry = NULL;
        arry = new int[2*Length];
        Length *= 2;
        for (int i = 0; i < Length; i++)
        {
            arry[i] = tmp[i];
        }
    }

    arry[Size-1] = num;
}

void Vector::pop_back()
{
    Size--;
    arry[Size] = 0;
}

int Vector::top()
{
    return arry[Size-1];
}
