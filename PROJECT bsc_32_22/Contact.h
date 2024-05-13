#pragma once 
#include <string>
using namespace std;


class Contact
{
    public:
           //constructor
            Contact();
            Contact(string newFirstname, string newLastname, string newPhoneNumber);

            //accessor methods
            string getFirstName();
            string getLastName();
            string getPhoneNumber();
            void setFirstName(string newFirstName);
            void setLastName(string newLastName);
            void setPhoneNumber(string newPhoneNuber);
            bool operator == (const Contact& otherContact);

    private:
            //member variables
            string firstName;
            string lastName;
            string phoneNumber;
};