#include "Square.h"

using namespace shapes;

Square::Square()
{
    sideLength = 0;
}
//overloaded
Square::Square(float newSideLength)
{
    sideLength = newSideLength;
}

//accessor methods
void Square::setSideLength(float newSideLength)
{
    sideLength = newSideLength;
}
float Square::getSideLength()
{
    return sideLength;
}