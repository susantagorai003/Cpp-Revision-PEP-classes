#include<iostream>
using namespace std;
int main()
{
    string input;
    getline(cin,input);
    int firstSpace=input.find(' ');
    string firstWord=input.substr(0,firstSpace);
    cout<<firstWord<<endl;

}