// Diamond Problem in C++ using Virtual Inheritance
#include<iostream>
using namespace std;
class A{
    public: 
    void Print(){
        cout<<"Hello from A"<<endl;
    }
};
class B: virtual public A{
    
};

class C: virtual public A{
    
};

class D: public B, public C{
    
};
int main(){
    // D obj;
    //obj.Print(); // Error: request for member 'Print' is ambiguous
    // obj.B::Print(); // Resolving ambiguity by specifying the path
    // obj.C::Print(); // Resolving ambiguity by specifying the path
    // obj.Print();
    A* obj = new D();
    obj->Print(); // No ambiguity now

    return 0;
}