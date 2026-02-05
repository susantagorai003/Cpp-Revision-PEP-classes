#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ifstream file("num.txt");
    if(!file)
    {
        cout<<"file not found"<<endl;
        return -1;
    }
    // int arr[10];
    // for(int i=0;i<10;i++)
    // {
    //     file>>arr[i];
    // }
    // for(int i=0;i<10;i++)
    // {
    //     for(int j=0;j<10-i-1;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }

    vector<int> arr(10);
    for(int i=0;i<10;i++)
    {
        file>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    file.close();
    return 0;
}