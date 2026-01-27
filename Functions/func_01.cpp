#include<iostream>
using namespace std;
void swap1(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"Value of X and Y inside func : "<<x<<" "<<y<<endl;
}
void swap2(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"Value of X and Y inside func : "<<x<<" "<<y<<endl;
}
int main()
{
    int x=10;
    int y=50;
    swap1(x,y);
    cout<<"Value of X and Y outside func : "<<x<<" "<<y<<endl;
    cout<<endl;
    cout<<"Understanding pass by reference!!"<<endl;
    swap2(x,y);
    cout<<"Value of X and Y outside func : "<<x<<" "<<y<<endl;
}