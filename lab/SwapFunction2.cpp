#include <iostream>

using namespace std;

void SwapNumbers(int* varA, int* varB);

int main()
{
    int varA = 25;
    int varB = 100;

    //displaying before swap
    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;
    
    //pointers for the variables
    int* pPointerA = &varA;
    int* pPointerB = &varB;
    
    //calling function
    SwapNumbers(pPointerA, pPointerB);

    //displaying after swap
    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}

void SwapNumbers(int* varA , int* varB)
{
    //Keep value in another variable
    int temp = *varA;
    //exchange values
    *varA = *varB;
    *varB = temp;

}