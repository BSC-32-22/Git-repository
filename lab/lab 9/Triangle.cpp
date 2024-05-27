#include "Triangle.h"

Triangle::Triangle (int a, int b)
{
    mWidth = a;
    mHeight = b;
}

int Triangle:: Area()
{
    return mWidth * mHeight / 2;
} 