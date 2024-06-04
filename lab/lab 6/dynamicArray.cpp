#include <iostream>

using namespace std;

int main()
{
    int rows = 0;
    int columns = 0;
    int checker = 0; // for checking iteration conditions
    double **dynamicArray = nullptr;

    cout << "how many rows should the array have: ";
    while(checker == 0)
    {
        cin >> rows;
        if(rows > 3 )
        {
            cout << "sorry the size shouldn't exceed 3\n"
                 << "please re enter: ";
        }
        else
            checker++;
    }

    checker--;

    cout << "how many columns should the array have: ";
     while(checker == 0)
    {
        cin >> columns;
        if(columns > 3 )
        {
            cout << "sorry the size shouldn't exceed 3\n"
                 << "please re enter: ";
        }
        else
            checker++;
    }

    //creating 2D using pointers
    dynamicArray = new double*[rows];

    for(int i = 0; i < rows; i++)
    {
        dynamicArray[i] = new double[columns];
    
    }

    //input 0 to number of elements
    double input = 1;

    for(int j = 0; j < rows; j++)
    {
        //input first row
        for(int i = 0; i < columns; i++)
        {
            dynamicArray[j][i] = input++;  
        }
    }

    //output
    cout << "\nThe ouput for the 2D array is:\n";

     for(int j = 0; j < rows; j++)
    {
        //output row by row
        for(int i = 0; i < columns; i++)
        {
            cout << dynamicArray[j][i] << " ";  
        }
        cout << endl;
    }
}