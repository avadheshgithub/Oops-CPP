/*

    ## Enscapsulation

        - Enscapsulation is wrapping up of data & member functions in a single unit (called class);
        - helps in data hiding (private access modifier)

        class = data + member Functions

    ## Data Hidding 
        - onyl hiding data
        - use only private access Modeifier

*/

#include<iostream>
using namespace std;

class Account{
private:
    double balance;
    string password; // data hiding - 

public:
    string accountID;
    string userName;
};

int main(){

}