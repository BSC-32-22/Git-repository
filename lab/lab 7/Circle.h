#pragma once

namespace shapes
{
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