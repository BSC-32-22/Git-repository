#include <iostream>

using namespace std;

class Rectangle
{
    private: 
            float length;
            float width;

    Rectangle()
    {
        length = 0;
        width = 0;
    }
    ~Rectangle()
    {

    }
    
    public:

        //set length
        void setLength(float newLength)
        {
            length = newLength;
        }
        //set width
        void setWidth(float newWidth)
        {
            width = newWidth;
        }
        //get length
        float getLength()
        {
            return length;
        }
        //get width
        float getWidth()
        {
            return width;
        }
        //get area
        float getArea()
        {
            return (length * width);
        }

};


int main()
{
    

    return 0;
}