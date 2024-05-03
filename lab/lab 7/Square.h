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


};
