#include "AreaDeclaration.h"

//function definitions

static float Area::AreaSquare(Square squareObject) 
{
   float result = squareObject.getSideLength();
    
    return (result * result);
}

static float AreaTriangle(Triangle triangleObject)
{
    float base = triangleObject.getBase(); 
    float height = triangleObject.geth();
    
}

static float AreaCircle(Circle circleObject);