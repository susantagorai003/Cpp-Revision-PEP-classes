#include<iostream>
using namespace std;
class Box{
    public:
    int capacity=10;
    Box operator+(const Box &otherBox)
    {
        Box temp;
        temp.capacity=this->capacity+otherBox.capacity;
        return temp;
    }
    Box& operator--()
    {
        this->capacity--;
        return *this;
    }
    Box operator--(int)
    {
        Box temp=*this;
        this->capacity--;
        return temp;
    }
    
};
int main()
{
    Box box1;
    Box box2;
    Box box3=box1+box2;
    cout<<box3.capacity<<endl;
    // --box3;
    box3--;
    cout<<box3.capacity<<endl;
    

}