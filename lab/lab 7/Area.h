#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
using namespace shapes;

class Area
{
    public:

            static float AreaSquare(Square squareObject);
            static float AreaTriangle(Triangle triangleObject);
            static float AreaCircle(Circle circleObject);
};