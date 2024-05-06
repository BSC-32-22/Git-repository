#include "Person.h"

using namespace std;

//default constructor
Person::Person()
{
    //get name
    cout << "input first name: ";
    cin >> mFirstName;
    //get age
    cout << "input age: "
    cin >> mAge;
    //get weight
    cout << "input weight: ";
    cin >> mWeight;
   
}
//overoaded constructor
Person::Person(string newName,float newWeight)
{
    mFirstName = newName;
    mWeight = newWeight;
}

float Person::operator + (const Person& otherPerson)
{

   float result = this-> mWeight + otherPerson.mWeight;

   return result;
}

bool Person::operator == (const Person& otherperson)
{
    bool result;
    if(this->mFirstName == otherperson.mFirstName)
    result = true;
    else
    result = false;

    return result;
}

bool Person::operator != (const Person& otherPerson)
{
    bool result;
    if (this->mFirstName == otherPerson.mFirstName)
    result = true;
    else
    result = false;

    return result;
}

bool Person::operator > (const Person& otherPerson)
{
    bool result;
    if (this->mAge > otherPerson.mAge)
    result = true;
    else
    result = false;

    return result;
}


bool Person::operator < (const Person& otherPerson)
{
    bool result;
    if (this->mAge < otherPerson.mAge)
    result = true;
    else
    result = false;

    return result;
}