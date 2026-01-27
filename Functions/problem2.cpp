#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;
    cin.ignore();
    string text;
    getline(cin,text);
    cout<<"Name: "<<name<<endl;
    cout<<"Text: "<<text<<endl;
}