#include<iostream>
using namespace std;
int main(){
    int x,y;
    try{
        cin>>x>>y;
        if(y==0){
            throw "Division by zero error";
        }
        else{
            cout<<"Result: "<<x/y<<endl;
        }
    }
    catch(const char* msg){
        cout<<"Error: "<<msg<<endl;
    }
    return 0;
}