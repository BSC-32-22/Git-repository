#pragma once

#include 	<string>

using namespace  std;

class  Person
{
    public:
    Person();
    Person(string newName, float  newWeight);

    ~Person();
    
    //Overload the add  operator
    float operator + (const Person& otherPerson);
    
    //overload the == operator
    bool operator == (const Person& otherperson);
    
    //overload the != operator
    bool operator != (const Person& otherPerson);

    //overloading > operator
    bool operator > (const Person& otherPerson);

    //overloading < operator
    bool operator < (const Person& otherPerson);

    //conversion operator
    operator int();
    
    private:
    float mWeight;
    string mFirstName; 
    int  mAge;

};
