#include <iostream>

using namespace std;

class Rectangle
{
    private: 
            float length;
            float width;

    public:
        Rectangle()
        {
            length = 0;
            width = 0;
        }
        ~Rectangle()
        {

        }
//accesor methods
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
    Rectangle rectangleObject;
    
    //give length
    cout << "enter length of the rectangle: ";
    float length;
    cin >> length;
    rectangleObject.setLength(length);

    //give width
    cout << "\nenter width of the rectangle: ";
    float width;
    cin >> width;
    rectangleObject.setWidth(width);

    //output Area
    cout << "the Area of the rectangle is: " << rectangleObject.getArea(); 


    return 0;
}