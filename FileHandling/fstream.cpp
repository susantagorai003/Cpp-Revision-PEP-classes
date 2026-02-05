#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("example.txt",ios::in | ios::out | ios::app);
    string word;
    file<<"Hello World"<<endl;
    file.seekg(0);
    file>>word;
    cout<<word<<endl;
    file.close();
}