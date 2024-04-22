#include <iostream>

using namespace std;

int main()
{
    int numberArray[5];

    int* pPointer = nullptr;

    pPointer = numberArray;

    *pPointer = 10; //asssign value to 1st element

    pPointer++; //increment pointer to assign address of second element

    *pPointer = 20; //assign value 2nd element

    pPointer = &numberArray[2]; //assign 3rd element address
    *pPointer = 30; //assign value to 3rd element

    pPointer = numberArray + 3; //assign address of 4th element
    *pPointer = 40; //assign 4th element a value

    pPointer = numberArray; //assign to first element

    *(pPointer +  4) = 50; //assign 5th element 

    //iterate and output all elements in the array
    for (int n = 0; n < 5; n++)
    {
        cout << numberArray[n] << ", ";
    }

    return 0;
}