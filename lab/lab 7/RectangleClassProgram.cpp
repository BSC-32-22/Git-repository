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

    //another object
    cout<<"\nCreating another object\n";
    
    //give length
    cout << "enter length of the rectangle: ";
    float length;
    cin >> length;

    //give width
    cout << "\nenter width of the rectangle: ";
    float width;
    cin >> width;
  
    //instantiation
    Rectangle rectangleObject2 = Rectangle(length,width);

    //output Area
    cout << "the Area of the rectangle is: " << rectangleObject2.getArea(); 

    return 0;
}