#include <iostream>
#include "Rectangle.h"
using namespace std;


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