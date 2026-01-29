// constructor chaining using inheritance in C++ 
#include <iostream>
using namespace std;
class Dog{
    protected:
    string Dogname;
    public:
    Dog(string name) : Dogname(name) {
        cout << "Dog constructor called" << endl;
    }
    void bark() {
        cout << Dogname << " barks" << endl;
    }
};
class Puppy : public Dog {
    public:
    Puppy(string name) : Dog(name) {
        cout << "Puppy constructor called" << endl;
    }
    void weep() {
        cout << Dogname << " weeps" << endl;
    }
};
int main() {
    Puppy p("Buddy");
    p.bark();  
    p.weep();  
    return 0;
}