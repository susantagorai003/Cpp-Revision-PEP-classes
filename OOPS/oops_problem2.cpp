// Create a class PasswordVault to store a list of passwords
// Data members: string owner: The name of the vault owner, string* passwords: A heap-allocated array of strings, int capacity: Max passwords the vault can hold, int currentCount: How many are currently stored
// Methods: void addPassword(string password): Adds password to the next available slot if not full,
// void showVault(): Displays all stored passwords,Requirement: Use a temporary ointer to traverse the array (do not move the original pointer)
//The destrutor:Ensure the heap memory is realeased Print system Vault owner destroyed...)
#include<iostream>
using namespace std;
class PasswordVault{
    private:
        string owner;
        string* passwords;
        int capacity;
        int currentCount=0;
    public:
    PasswordVault(string owner,int capacity)
    {
        this->owner=owner;
        this->capacity=capacity;
        passwords=new string[capacity];
    }
    void addPassword(string password){
        if(currentCount<capacity){
            passwords[currentCount]=password;
            currentCount++;
        }else{
            cout<<"Vault is full. Cannot add more passwords."<<endl;
        }
    }
    void showVault(){
        string* temp=passwords;
        for(int i=0;i<currentCount;i++){
            cout<<*(temp+i)<<endl;
        }
    }
    ~PasswordVault(){
        delete[] passwords;
        cout<<"Vault owned by "<<owner<<" destroyed."<<endl;
    }


};
int main(){
    PasswordVault vault("Alice",3);
    vault.addPassword("pass123");
    vault.addPassword("qwerty");
    vault.addPassword("letmein");
    vault.addPassword("extraPass"); 
    cout<<"Stored Passwords:"<<endl;
    vault.showVault();
    return 0;
}