// Make a class called account , two class savings account and current account
// display balance // saving account
// current account// current account balance
#include <iostream>
using namespace std;
class Account {
    

    public:
    int balance;
    int accoutnumber=23123;
    virtual void displayBalance()
    {
        cout<<"Account Balance :"<<balance<<endl;
    }

}; 
class SavingsAccount : public Account{

    public:
    SavingsAccount()
    {
        balance = 5000;
    }
    void displayBalance() 
    {
        cout<<"Savings Account Balance : "<<balance<<endl;
    }

}; 

class CurrentAccount : public Account {
    public:
    CurrentAccount()
    {
        balance = 10000;
    }
    void displayBalance()
    {
        cout<<"Current Account Balance : "<<balance<<endl;
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