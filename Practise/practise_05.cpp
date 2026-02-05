#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=20;i++)
    {
        if(i%2==0 && i%4!=0)
        {
            cout<<i<<" ";
        }   
    }
}