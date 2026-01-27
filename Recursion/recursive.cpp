#include<iostream>
using namespace std;
void print(int n)
{
    if(n==20) return;
    cout<<n<<" ";
    print(n+1);
}

int fibonacci(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    // if(n==0 || n==1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int sum(int n)
{
    if(n==0) return 0;
    return n+sum(n-1);
}
int sumDigit(int n)
{
    if (n==0) return 0;
    return (n % 10) + sumDigit(n / 10);
}

int main()
{
    // print(4);
    // cout<<fibonacci(4);
    // cout<<sum(5);
    cout<<sumDigit(1234);
}