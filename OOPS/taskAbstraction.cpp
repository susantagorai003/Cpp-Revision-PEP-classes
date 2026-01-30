// class Payment should be abstrcat
// class googlepay inherit -> payment
//class -> apple pay inherit -> payment

// pay() -> virtual in base class..
// pay() -> override in googlepay and override in applePay
// google pay will charge (no platform fee)

#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void pay()=0; // pure virtual function
};
class GooglePay : public Payment{
    private:
    void pay() override {
        cout<<"Google Pay with 0 rs platform fee."<<endl;
    }
};
class ApplePay : public Payment{
    private:
    void pay() override {
        cout<<"Apple Pay with a platform fee of 2 rs"<<endl;
    }
};
int main(){
    Payment* p1 = new GooglePay();
    p1->pay();

    Payment* p2 = new ApplePay();
    p2->pay();

    return 0;
}