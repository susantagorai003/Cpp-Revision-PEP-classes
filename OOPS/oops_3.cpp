#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    string address;

    Student(string name, int age){
        setname(name);
        setage(age);
    }
    Student(string name, int age, string address){
        setname(name);
        setage(age);
        setAdress(address);
    }
    void displayInfo(){
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
    void setname(string name){
        this->name=name;
    }
    void setage(int age){
        if(age<0){
            this->age=0;
        }else{
            this->age=age;
        }
    }
    void setAdress(string address);
    void displayAddress(){
        cout<<"Address: "<<address<<endl;
    }
};
void Student::setAdress(string address){
    this->address=address;

};

int main(){
    Student student1("Alice",20);
    Student student2("Bob",10); 
    student1.displayInfo();
    student2.displayInfo();
    Student student3("Charlie",22,"123 Main St");
    student3.displayInfo();
    student3.displayAddress();
    return 0;
} 