// WAP which take 3 inputs from user 2 operands and one operator (+,-,*,/) and result accordingly
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first operand: "<<endl;
    cin>>a;
    cout<<"Enter second operand: "<<endl;
    cin>>b;
    char ch;
    cout<<"Enter operator: "<<endl;
    cin>>ch;
    switch(ch){
        case '+':
            cout<<"The sum is: "<<a+b<<endl;
            break;
        case '-':
            cout<<"The difference is: "<<a-b<<endl;
            break;
        case '*':
            cout<<"The product is: "<<a*b<<endl;
            break;
        case '/':
            if(b!=0){
                cout<<"The quotient is: "<<a/b<<endl;
            }else{
                cout<<"Error: Division by zero!"<<endl;
            }
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }  
    return 0; 
    
}
