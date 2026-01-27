// definition of class in C++: Class is a user-defined data type that serves as a blueprint for creating objects.
#include <iostream>
using namespace std;
class Box{
    public:
    double length;
    double breadth;
    double height;

    Box(double length, double breadth, double height){
        this->length=length;
        this->breadth=breadth;
        this->height=height;
    }
    double volume(){
        return length*breadth*height;
    }

};
int main(){
    Box box1(3.5,1.2,2.0);
    Box box2(4.0,2.0,1.5);

    cout<<"Volume of box1: "<<box1.volume()<<endl;
    cout<<"Volume of box2: "<<box2.volume()<<endl;
    Box* box3=new Box(5.0,2.0,3.0);
    cout<<"Volume of box3: "<<box3->volume()<<endl;
    return 0;
}