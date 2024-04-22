#include <iostream>

using namespace std;

int main()
{
    //dynamically allocating an integer
    int* dynamicInt = new int;
    //dynamically allocating a string
    string* dynamicStr = new string;

    cout << "Please enter the integer value: ";
    cin >> *dynamicInt;

    cout << "Please enter a String: ";
    cin >> *dynamicStr;

    //output to the console
    cout << "Value of the integer is : " << *dynamicInt << "\n"
         << "the string is: " << *dynamicStr << endl;

    //deleting 
    delete dynamicInt;
    delete dynamicStr;


    return 0;

}