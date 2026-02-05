#include<iostream>
using namespace std;
void swapp(int &x, int &y)
{
    x=x^y;
    y=x^y;
    x=x^y;
}
int main()
{
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping: a = "<<a<<", b = "<<b<<endl;
    swapp(a,b);
    cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
}