#include<iostream>
using namespace std;
class Base{
    private:
        int name;
        string age;
        int id = 101;
    public:
        void setdata(int n, string a)
        {
            name = n;
            age = a;
        }
        void getdata()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"ID: "<<id<<endl;
        }
};
class Derived : public Base{
    private:
        string role;
        public:
        Derived(string name,int age,string r)
        {
            setdata(age, name);
            role = r;
            checkRole();
        }
        void checkRole()
        {
            if(role == "admin")
            {
                cout<<"Access Granted"<<endl;
                getdata();
            }
            else
            {
                cout<<"Access Denied"<<endl;
            }
        }
};

int main()
{
    Derived d1("Susanta", 30, "admin");
   
    Derived d2("Rahul", 25, "user");

    return 0;
}