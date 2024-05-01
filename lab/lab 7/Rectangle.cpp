
#include "Rectangle.h"

    
//define member functions

Rectangle ::Rectangle()
{
    length = 0;
    width = 0;
}
Rectangle :: Rectangle(float newLength, float newWidth)
{
        length = newLength;
        width = newWidth;
}
    //set length
    void Rectangle::setLength(float newLength)
    {
        length = newLength;
    }
    //set width
    void Rectangle::setWidth(float newWidth)
    {
        width = newWidth;
    }
   //get length
    float Rectangle::getLength()
    {
           return length;
    }
    //get width
    float Rectangle::getWidth()
    {
        return width;
    }
    //get area
    float Rectangle::getArea()
    {
        return (length * width);
    }
