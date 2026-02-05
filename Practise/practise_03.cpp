#include<iostream>
using namespace std;
int main()
{
    int a=19;
    float b=3.4;
    char ch='A';
    bool flag=true;
    cout<<"Integer Size: "<<sizeof(a)<<" bytes"<<endl;
    cout<<"Float Size: "<<sizeof(b)<<" bytes"<<endl;
    cout<<"Character Size: "<<sizeof(ch)<<" bytes"<<endl;
    cout<<"Boolean Size: "<<sizeof(flag)<<" bytes"<<endl;
    return 0;
}