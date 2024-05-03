#include "Circle.h"
using namespace shapes;


//implementation
Circle::Circle()
{
     radius = 0;
}
//overload
Circle::Circle(float newRadius)
{
     radius = newRadius;
}

//access method
void Circle::setRadius(float newRadius)
{
    radius = newRadius;
}
float Circle::getRadius()
{
    return radius;
}