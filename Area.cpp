#include <iostream>

using namespace std;

//function prototypes
void square();
void rectangle();
void triangle();

int main()
{
    //program exit checker
    int checker = 0;
    do{
    
        //prompt user
        cout << "Please select the area of the shape to calculate\n"
            << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program\n\n"
            << "Enter selection: ";
        string input;
        cin >> input;

        if(input == "1")
            square();
        else if(input == "2")
            rectangle();   
        else if(input == "3")
            triangle();
        else if(input == "4")
            checker++;
        else
            cout << "Your input was: " << input << " which is an invalid input\n"
                 << "Please enter a valid input";

    } while(checker == 0);

}

//square function
void square()
{
    //prompt input
    cout << "Enter the length of the square: ";
    double length;
    cin >> length;
    //display output
    cout << "The area is " << (length * length) << endl;

}

//rectangle function
void rectangle()
{
    //prompt input
    cout << "Enter the length of the rectangle: ";
    double length;
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    double width;
    cin >> width;

    //display output
    cout << "The area is " << (length * width) << endl;

}

//triangle function
void triangle()
{
    //prompt input
    cout << "Enter the height of the triangle: ";
    double height;
    cin >> height;
    cout << "Enter the base of the triangle: ";
    double base;
    cin >> base;

    //display output
    cout << "The area is " << ((1/2) * base * height) << endl;

}
