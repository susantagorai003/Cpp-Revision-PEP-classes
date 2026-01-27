#include<iostream>
using namespace std;
int toh(int n)
{
    if(n==1) return 1;
    return toh(n-1)+toh(n-1)+1;
    
}
int main()
{
    
    cout<<"Minumum Operations: "<<toh(3);
}