
#include "Rectangle.h"

    

Rectangle ::Rectangle()
{
    length = 0;
    width = 0;
}


//accesor methods
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
