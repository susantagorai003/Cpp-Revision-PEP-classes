#include<iostream>
using namespace std;
static double totalBankCash=0.0;
class BankAccount{
    private:
        double balance;
    public:
    BankAccount(double balance){
        this->balance = balance;
        totalBankCash += balance;
    }
    friend class TaxAuditor;
};
class TaxAuditor{
    public:
    void inspectBank(BankAccount &account){
        cout<<"Inspecting Bank Account Balance: "<<account.balance<<endl;
    }
    void showTotalBankCash(){
        cout<<"Total Bank Cash: "<<totalBankCash<<endl;
    }

};
int main(){
    BankAccount account1(1000.50);
    BankAccount account2(2500.75);

    TaxAuditor auditor;
    auditor.inspectBank(account1);
    auditor.inspectBank(account2);
    auditor.showTotalBankCash();

    return 0;
}