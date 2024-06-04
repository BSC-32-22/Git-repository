/*
this program will generate a random number and tell the user
the days left for his/her subscription
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{
    //generating random number & and assigning it
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    //output to subscriber
    if (daysUntilExpiration > 5 && daysUntilExpiration <= 10)
    { 
        cout << "Your subscription will expire soon. Renew now!";
    }
    else if (daysUntilExpiration >= 2 && daysUntilExpiration <= 5)
    {
        cout << "Your subscription expires in " << daysUntilExpiration <<" days\n"
             << "Renew now and save 10%!";
    }   
    else if (daysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day!\nRenew now and save 20%!";
    }
    else if (daysUntilExpiration == 0)
    {
        cout << "Your subscription has expired";
    }
    else
        cout << "You have an active subscription";

}