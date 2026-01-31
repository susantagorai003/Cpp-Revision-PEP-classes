#include<iostream>
using namespace std;
class ICarComponent{
    public:
    virtual void engine()=0;
    virtual void gearBox()=0;
    virtual void steeringWheels()=0;
};

class HybridCar : public ICarComponent{
    public:
        void engine() override{
            cout<<"Hybrid engine starts!!"<<endl;
        }
        void gearBox() override{
            cout<<"Automatic Gearbox engaged!!"<<endl;
        }
        void steeringWheels() override{
            cout<<"Power Steering is active!!"<<endl;
        }
};

int main()
{
    HybridCar myCar;
    myCar.engine();
    myCar.gearBox();
    myCar.steeringWheels();
}