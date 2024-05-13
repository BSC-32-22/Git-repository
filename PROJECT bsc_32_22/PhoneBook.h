#pragma once 
#include "Contact.h"
#include <string>
using namespace std;

class PhoneBook
{
    Contact* dynamicArray = new Contact[5];
    
    public:
            PhoneBook();
            void Run();
            static int numberOfContacts = -1;

    private:
            void AddContact();
            void SaveContactsToFile();
            void ShowAllContacts();

};