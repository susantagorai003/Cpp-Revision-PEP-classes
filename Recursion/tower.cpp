#include<iostream>
using namespace std;
void toh(int n,char src,char aux,char dest)
{
    if(n==1) 
    {
        cout << "Move disk 1 from " << src << " to " << dest << endl;
        return;
    }
    toh(n-1,src,dest,aux);
    cout<<"Move disk " <<n<<" from "<<src <<" to "<<dest<<endl;
    toh(n-1,aux,src,dest);
}
int main()
{
    toh(3,'A','B','C');
}