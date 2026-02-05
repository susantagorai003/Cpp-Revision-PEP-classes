#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("example2.txt",ios::in | ios::out | ios::app);
    string word;
    while(word != "STOP")
    {
        cout << "Enter a STOP to end: ";
        cin >> word;
        if(word != "STOP")
        {
            file << word << " ";
        }
    }
   
    file.seekg(0);
    file.clear(); 
    file.close();
}
