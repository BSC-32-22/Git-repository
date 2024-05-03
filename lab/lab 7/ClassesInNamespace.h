#pragma once

namespace shapes
{

    class Square
    {
        private:
                float sideLength;
        
        public:
                Square()
                {
                    sideLength = 0;
                }
                //overloaded
                Square(float newSideLength)
                {
                    sideLength = newSideLength;
                }
                //destructor
                ~Square();

                //accessor methods
                void setSideLength(float newSideLength)
                {
                    sideLength = newSideLength;
                }
                float getSideLength()
                {
                    return sideLength;
                }
    };

    

    class Circle
    {
        private:
                float radius;
        public:
                Circle()
                {
                    radius = 0;
                }
                //overload
                Circle(float newRadius)
                {
                    radius = newRadius;
                }
                //destructor
                ~Circle();

                //access method
                void setRadius(float newRadius)
                {
                    radius = newRadius;
                }
                float getRadius()
                {
                    return radius;
                }
    };

};
