#include <iostream>
#include <fstream>

using namespace std;

//function prototypes
void vowels(string sentence);
void wordCount(string sentence);
string reverse(string sentence);



int main()
{
    //input object
    ifstream  input("fileData.txt");
    
    //contents to string
    string fileData;
    getline(input,fileData);

    //function for vowels
    vowels(fileData);

    //function to count words
    wordCount(fileData);

    //function to reverse
    string output;
    output = reverse(fileData);
    cout << output << endl;

    //
}

void vowels(string sentence)
{
    int numberOfVowels = 0;

    for(int i = 0; i < sentence.length(); i++)
    {
        char checker = sentence.at(i);
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

void wordCount(string sentence)
{
    int numberOfWords = 1;
    

   for(int i = 0; i < sentence.length(); i++)
    {
        char checker = sentence.at(i);
        
        if(isspace(checker))
            numberOfWords++;
        
    }

   cout << "There are "<<numberOfWords <<" words in the text file" <<endl;

}

string reverse(string sentence)
{
    string reversed;
    for(int i = (sentence.length() - 1); i >= 0; i--)
    {
        reversed += sentence.at(i);
    }

    return reversed;
}