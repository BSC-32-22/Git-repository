#pragma once

namespace shapes
{
    class Circle
    {
        private:
                float radius;
        public:
                Circle();
                //overload
                Circle(float newRadius);
                //destructor
                ~Circle();

                //access method
                void setRadius(float newRadius);
                float getRadius();
       
    };
};