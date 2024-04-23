#include <iostream>

using namespace std;

int main()
{
    int rows = 0;
    int columns = 0;
    int checker = 0; // for checking iteration conditions
    double *dynamicArray = nullptr;

    cout << "how many rows should the array have: ";
    while(checker == 0)
    {
        cin >> rows;
        if(rows > 3 )
        {
            cout << "sorry the size shouldn't exceed 3";
        }
        else
            checker++;
    }

    cout << "how many columns should the array have: ";
     while(checker == 0)
    {
        cin >> columns;
        if(columns > 3 )
        {
            cout << "sorry the size shouldn't exceed 3";
        }
        else
            checker++;
    }

    dynamicArray = new double[rows][columns];

}