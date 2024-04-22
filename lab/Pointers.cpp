#include <iostream>

using namespace std;

int main()
{
    int firstValue;
    int secondValue;

    int* pPointer = nullptr;

    //assign pointer with the address of firstvalue
    pPointer = &firstValue;
    *pPointer = 10; //indirection

    //assign pointer with address of second value
    pPointer = &secondValue;
    *pPointer = 20; //indirection

    cout << "firstValue is " << firstValue << "\n"
         << "secondValue is " << secondValue << endl;
}