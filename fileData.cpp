#include <iostream>
#include <fstream>

using namespace std;

//function prototypes
void vowels(string sentence);
void wordCount(string sentence);
string reverse(string sentence);
string capitalization(string sentence);


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
    cout << "The reversed statement is:\n";
    cout << output << endl;

    //function capitalization
    string result;
    result = capitalization(fileData);
    cout << "The statement with capitalized 2nd letters will be:\n";
    cout << result << endl;

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

string capitalization(string sentence)
{
    string result;
    string checker;
    string checkAssist;
    for(int i = 0; i < sentence.length(); i++)
    {
         if(isalpha(sentence.at(i)))
            checker += sentence.at(i);
         else if(isspace(sentence.at(i)))
        {
            for(int j = 0; j < checker.length(); j++)
            {
                if(j == 1)
                   checkAssist += toupper(checker.length());
                else
                    checkAssist += checker.at(j);
            }
            result += checkAssist + " ";
            checker.clear();
            checkAssist.clear(); 
        }   
    }

    return result;
}