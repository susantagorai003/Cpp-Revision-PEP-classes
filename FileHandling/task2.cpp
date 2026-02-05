#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
    ofstream fout("num.txt");
    if(!fout)
    {
        cout<<"file not found"<<endl;
    }
    for(int i=1;i<=10;i++)
    {
        fout<<rand()%100<<" ";
    }
    fout.close();
    return 0;

}