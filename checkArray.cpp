/*
this program has an array of strings 
*/
#include <iostream>

using namespace std;

int main()
{
    //string array
    string array[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

    //checking if element starts with B
    for(int i = 0;i < 8;i++)
    {
        string evaluator = array[i];
        char b = 'B'; 
        if(evaluator.at(0) == b)
        {
            cout << evaluator << endl;
        }
    }


}