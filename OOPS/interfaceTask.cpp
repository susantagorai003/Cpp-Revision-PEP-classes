#include <iostream>
using namespace std;
class IDevice{
    public:
    virtual void turnOn()=0;
    virtual void turnOff()=0;
};
class TV : public IDevice{
    public:
        void turnOn() override{
            cout<<"TV is ON!!"<<endl;
        }
        void turnOff() override{
            cout<<"TV is OFF!!"<<endl;
        }
};
class Fan : public IDevice{
    public:
        void turnOn() override{
            cout<<"Fan is ON!!"<<endl;
        }
        void turnOff() override{
            cout<<"Fan is OFF!!"<<endl;
        }
};
int main()
{
    IDevice* devices[2];
    devices[0] = new TV();
    devices[1] = new Fan();

    for(int i=0; i<2; i++){
        devices[i]->turnOn();
        devices[i]->turnOff();
        delete devices[i]; 
    }
}