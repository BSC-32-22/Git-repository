#pragma once

namespace shapes
{

    class Square
    {
        private:
                float sideLength;
        
        public:
                Square();
                //overloaded
                Square(float newSideLength);
                //destructor
                ~Square();

                //accessor methods
                void setSideLength(float newSideLength);
                float getSideLength();
    };

    class Triangle
    {
        private:
                float base;
                float height;
        public:
                Triangle();
                //overload
                Triangle(float newBase, float newHeight);
                //destructor
                ~Triangle();

                //access methods
                void setBase(float newBase);
                void setHeight(float newLength);
                float getBase();
                float getHeight();

    };

    class Circle
    {
        private:
                float radius;
        public:
                Circle();
                //overload
                Circle(float radius);
                //destructor
                ~Circle();

                //access method
                void setRadius(float newRadius);
                float getRadius();
    };

};
