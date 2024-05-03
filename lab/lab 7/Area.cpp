#include "Area.h"

//function definitions

static float Area::AreaSquare(Square squareObject) 
{
   float result = squareObject.getSideLength();
    
    return (result * result);
}

static float AreaTriangle(Triangle triangleObject)
{
    float base = triangleObject.getBase(); 
    float height = triangleObject.getHeight();

    return (0.5 * base * height);
}

static float AreaCircle(Circle circleObject)
{
    radius = circleObject.getRadius();
    radius *= radius;

    return (3.14 * radius);
}