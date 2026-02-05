#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("example2.txt",ios::in | ios::out | ios::app);
    string word;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter word: ";
        getline(cin, word);
        file<<word<<endl;
    }
    file.seekg(0);
    file.clear(); 
    file.close();
}
