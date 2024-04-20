#include <iostream>
#include <fstream>

using namespace std;

//function prototyoe
void vowels(string s);

// string reverse(string r);

int main()
{
    //input object
    ifstream  input("fileData.txt");
    
    //contents to string
    string fileData;
    getline(input,fileData);

    //function for for vowels
    vowels(fileData);

    //reverse function
    // string reversedString = reverse(fileData);
    // cout << reversedString << endl;
}

void vowels(string s)
{
    int numberOfVowels = 0;

    for(int i = 0; i < s.length(); i++)
    {
        char checker = s.at(i);
        switch (checker){

            case 'a': 
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                        numberOfVowels++;
                    
        } 
    }
    cout <<"There are " << numberOfVowels << " vowels in the text file." << endl;       

}

