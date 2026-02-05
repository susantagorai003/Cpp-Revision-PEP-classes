#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("example2.txt",ios::in | ios::out | ios::app);
    int wordCount = 0;
    string word;
    file.seekg(0);
    while(file >> word)
    {
        wordCount++;
    }
    cout << "Total number of words: " << wordCount << endl;
    file.close();
}