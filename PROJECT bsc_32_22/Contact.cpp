#include "Contact.h"
using namespace std;

//constructors
Contact::Contact()
{
    firstName = "";
    lastName = "";
    phoneNumber = "";
}

Contact::Contact(string newFirstname, string newLastname, string newPhoneNumber)
{
    firstName = newFirstname;
    lastName = newLastname;
    phoneNumber = newPhoneNumber;
}

//accessor
string Contact::getFirstName()
{
    return firstName;
}

string Contact::getLastName()
{
    return lastName;
}

string Contact::getPhoneNumber()
{
    return phoneNumber;
}

void Contact::setFirstName(string newFirstName)
{
    firstName = newFirstName;
}

void Contact::setLastName(string newLastName)
{
    lastName = newLastName;
}

void Contact::setPhoneNumber(string newPhoneNumber)
{
    phoneNumber = newPhoneNumber;
}

bool Contact::operator==(const Contact& otherContact)
{
    bool result;
    if (this->phoneNumber == otherContact.phoneNumber)
        result = true;
    else    
        result = false;
    
    return result;
}



