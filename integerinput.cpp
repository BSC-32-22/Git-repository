#include <iostream>

using namespace std;

int main()
{
    //prompt user 
    cout << "Enter an integer value between 5 and 10\n";

    string input;
    int checker = 0;
  
    while(checker == 0)
    {
        cin >> input;
        
        char tester = input.at(0);
        
        if(isdigit(tester))
        {
            if(input >= "0" && input <= "5" || input >= "10" && input <= "10000000000000")
                cout <<"You entered " << input << ". Please enter a number between 5 and 10\n";
            
            else 
            {
                cout << "your input value(" << input << ") has been accepted.";
                checker++;
            }
        }

        if(isalpha(tester)){
            cout << "Sorry, you entered an invalid number, please try again\n";
        }
    }
    


  return 0;  
}