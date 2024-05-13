#include "PhoneBook.h"
#include "Contact.h"
using namespace std;


void PhoneBook::AddContact()
{
    Contact newContact;
    cout << "Enter Contact's first name: ";
    newContact.setFirstName(cin);
    cout << "Enter contacts's last name: ";
    newContact.setLastName(cin);
    cout << "Enter contact's phone number: ";
    newContact.setPhoneNumber(cin);

    int checker = 0;
    for(int i = 0; i < 5; i++)
    {
        if(dynamicArray[i].getPhoneNumber == newContact.getPhoneNumber)
        {
            cout << "Contact already exists\n";
            checker++;
        }
    }
    if (checker == 0)
    {
        if (numberOfContacts < 4)
            {
                dynamicArray[numberOfContacts+1] = newContact;
                cout << "successfully saved\n";
                numberOfContacts++;
            }
        else (numberOfContacts == 4)
        cout << "memory full, can't add contact\n";

    }

}

void PhoneBook::SaveContactsToFile()
{
    fstream contacts("contacts.txt");
    
    if(contacts.is_open())
    {
        for(int i = 0; i < 5; i++)
        {
            contacts << dynamicArray[i].getFirstName << " "
                     << dynamicArray[i].getLastName << " "
                     << dynamicArray[i].getPhoneNumber << endl;
        }
    }
    else 
        cout << "the file failed to open\n";

}

void PhoneBook::ShowAllContacts()
{
    if (numberOfContacts > -1)
    {
        for(int i = 0; i < 5; i++)
        {
                cout << dynamicArray[i].getFirstName << " "
                     << dynamicArray[i].getLastName << " "
                     << dynamicArray[i].getPhoneNumber << endl;
        }
    }
    else
        cout << "no valid contacts to show";
}

void PhoneBook::Run()
{
   int checker = 0;
   do{
            cout << "Options\n" <<"1. Add a contact.\n"
            <<"2. Show all Contacts.\n"
            <<"3. Save contacts to file.\n"
            <<"4. Quit.\n\n"

        int check = 0;    
        do{
            cout<<"what would you like to do? "
            int choice;
            cin >> choice;

            switch(choice)
            case 1: AddContact();
            case 2: ShowAllContacts();
            case 3: SaveContactsToFile();
            case 4: checker++;
            default: cout << "number out of bounds";
                    check++; 
         } while(check > 0);

    }while (checker == 0);
}
