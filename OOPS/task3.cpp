#include<iostream>
using namespace std;
class Server{
    public:
    Server()
    {
        cout<<"Server is starting up..."<<endl;
    }

    virtual ~Server()
    {
        cout<<"Server hardware off..."<<endl;
    }
};

class Webstack: public Server{
    public:
    Webstack()
    {
        cout<<"Allocating 10 gb ram"<<endl;
    }

    ~Webstack()
    {
        cout<<"10 gb ram released !!"<<endl;
    }
};
int main()
{
    Server* server_ptr = new Webstack();
    delete server_ptr;
}