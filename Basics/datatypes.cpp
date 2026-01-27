//data types in C++
#include <iostream>
using namespace std;
int main(){
    //int size is typically 4 bytes
    int a=5;
    cout<<"The value of a is "<<a<<endl;
    
    //float size is typically 4 bytes
    float b=5.5;
    cout<<"The value of b is "<<b<<endl;

    //double  size is typically 8 bytes
    double c=5.55555;
    cout<<"The value of c is "<<c<<endl;

    //char  size is typically 1 byte
    char d='A';
    cout<<"The value of d is "<<d<<endl;

    //bool size is typically 1 byte
    bool e=true;
    cout<<"The value of e is "<<e<<endl;

    //literal in c++
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; //double literal



    return 0;
}