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

    class Triangle
    {
        private:
                float base;
                float height;
        public:
                Triangle()
                {
                    base = 0;
                    height = 0;
                }
                //overload
                Triangle(float newBase, float newHeight)
                {
                    base = newBase;
                    height = newHeight;
                }
                //destructor
                ~Triangle();

                //access methods
                void setBase(float newBase)
                {
                    base = newBase;
                }
                void setHeight(float newHeight)
                {
                    height = newHeight;
                }
                float getBase()
                {
                    return base;
                }
                float getHeight()
                {
                    return height;
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
