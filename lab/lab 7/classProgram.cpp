#include <iostream>
#include "ClassesInNamespace.h"
#include "AreaDeclaration.h"
using namespace std;
using namespace shapes;

// declaration of functions
void squareShape();
void triangleShape();
void circleShape();

int main()
{

    int checker = 0;

     do{   
            cout<<"1.Calculate the area of a square\n" 
                << "2.Calculate the area of triangle\n" 
                << "3.Calculate the area of a circle\n"
                << "4.Quit\n"
                << "choose from above list: "; 
            int choice;
            cin >> choice;
            //vet decision
            switch(choice){
                
                case 1: squareShape();

                case 2: triangleShape();

                case 3: circleShape();

                case 4: checker++;
            }

        }while(checker == 0);


    return 0;
}

void squareShape()
{
    Square squareObject;
    cout <<"enter sidelength: ";
    float sidelength;
    cin >> sidelength;
    squareObject.setSideLength(sidelength);
    float result = Area::AreaSquare(squareObject);
    cout << "the area of the square is: " << result <<"\n\n";

}

void triangleShape()
{
    cout << "enter base: ";
    float base;
    cin >> base;
    cout << "enter height: ";
    float height;
    cin >> height;

    Triangle triangleObject = Triangle(base,height);
    float result = Area::AreaTriangle(triangleObject);
    cout << "the area of the triangle is: " << result <<"\n\n";
}

void circleShape()
{
    cout << "enter radius: ";
    float radius;
    cin >> radius;

    Circle cirleObject = Circle(radius);
    float result = Area::AreaCircle(cirleObject);
    cout << "the area of the circle is: " << result <<"\n\n";
}