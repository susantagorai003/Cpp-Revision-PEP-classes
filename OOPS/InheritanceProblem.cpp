// Make a class called account , two class savings account and current account
// display balance // saving account
// current account// current account balance
#include <iostream>
using namespace std;
class Account {

    public:
    virtual void displayBalance()
    {
        cout<<"Account Balance :"<<endl;
    }

}; 
class SavingsAccount : public Account{

    public:
    void displayBalance() 
    {
        cout<<"Savings Account Balance : 5000"<<endl;
    }

}; 

class CurrentAccount : public Account {
    public:
    void displayBalance()
    {
        cout<<"Current Account Balance : 10000 "<<endl;
    }

};

int main() {
    
    SavingsAccount savings;
    CurrentAccount current;
    Account account;

    Account* account_ptr1 = new SavingsAccount();
    Account* account_ptr2 = new CurrentAccount();

    account_ptr1->displayBalance(); 
    account_ptr2->displayBalance(); 

    return 0;
}