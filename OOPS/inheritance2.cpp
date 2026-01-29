#include<iostream>
using namespace std;

class Parent{
    public:
    int x=10;
    protected:
    int y=20;
    private:
    int z=30;

    protected:
    void show()
    {
        cout<<"Parent show function called"<<endl;
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
        cout<<"Z: "<<z<<endl;
    }
};

class child : public Parent{
    public:
    void display()
    {
        cout<<"Child display function called"<<endl;
        cout<<"X: "<<x<<endl; // accessible
        cout<<"Y: "<<y<<endl; // accessible because y is protected
    }
    void cshow()
    {
        show(); 
    }
};

int main()
{
    child c;
    c.display();


    
    c.cshow();
    return 0;
}