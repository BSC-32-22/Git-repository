/*
this program will generate a random number and tell the user
the days left for his/her subscription
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //generating random number
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    //output to subscriber
    switch(daysUntilExpiration){

        case 11:cout << "You have an active subscription";
                break;
        case 10:
        case 9:
        case 8:
        case 7:
        case 6: 
                cout << "Your subscription will expire soon. Renew now!";
                break;
        case 5:
        case 4:
        case 3:
        case 2:
                cout << "Your subscription expires in " << daysUntilExpiration <<" days\n"
                     << "Renew now and save 10%!";
                break;

        case 1: cout << "Your subscription expires within a day!\nRenew now and save 20%!";
                break;
        case 0: cout << "Your subscription has expired";
                break;
    }
}