#include <iostream>

using namespace std;

//function prototypes
double square();
double rectangle();
double triangle();

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
double square()
{
    //prompt input
    cout << "Enter the length of the square: ";
    double length;
    cin >> length;

    return (length * length);

}

//rectangle function
double rectangle()
{

}

//triangle function
double triangle()
{

}
