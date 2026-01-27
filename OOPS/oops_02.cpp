#include <iostream>
using namespace std;
void printArray(int* arr){
    while (*arr!=-1)
    {
        cout<<*arr<<endl;
        arr++;
    }
    
    
}
int main(){
    int* arr=new int[5];
    arr[0]=10;
    arr[1]=20;  
    arr[2]=30;
    arr[3]=40;
    arr[4]=-1; //sentinel value to indicate end of array
    printArray(arr);
}