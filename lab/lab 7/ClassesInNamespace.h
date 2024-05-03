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


};
