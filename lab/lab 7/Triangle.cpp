#include "Triangle.h"
using namespace shapes;

//implementation
Triangle::Triangle()
{
    base = 0;
    height = 0;
}
//overload
Triangle::Triangle(float newBase, float newHeight)
{
    base = newBase;
    height = newHeight;
}

//access methods
void Triangle::setBase(float newBase)
{
     base = newBase;
}
void Triangle::setHeight(float newHeight)
{
    height = newHeight;
}
float Triangle::getBase()
{
    return base;
}
float Triangle::getHeight()
{
    return height;
}