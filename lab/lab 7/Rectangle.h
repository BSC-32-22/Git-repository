#pragma once

using namespace std;

class Rectangle
{
    private: 
            float length;
            float width;

    public:
            Rectangle();
            
            Rectangle(float newLength, float newWidth);

            ~Rectangle();
            
            //accesor methods
            void setLength(float newLength);
            void setWidth(float newWidth);

            float getLength();
            float getWidth();
            
            float getArea();

};
