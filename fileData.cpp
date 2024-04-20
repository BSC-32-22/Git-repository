#include <iostream>
#include <fstream>

using namespace std;

//function prototyoe
void vowels(string s);
void wordCount(string w);
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

    //function to count words
    wordCount(fileData);
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

void wordCount(string w)
{
    int numberOfWords = 1;
    

   for(int i = 0; i < w.length(); i++)
    {
        char checker = w.at(i);
        
        if(isspace(checker))
            numberOfWords++;
        
    }

   cout << "There are "<<numberOfWords <<" words in the text file" <<endl;

}