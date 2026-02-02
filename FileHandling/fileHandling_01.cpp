#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("test.txt");
    if(!file){
        cout<<"Error in opening file"<<endl;
        return -1;
    }
    string s;
    file>>s;
    cout<<"Content of file is: "<<s<<endl;
    file.close();
    return 0;
}