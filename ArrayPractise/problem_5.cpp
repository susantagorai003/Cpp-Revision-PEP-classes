// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     bool flag=true;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i-1]>arr[i])
//         {
//             flag=false;
//             break;
//         }
        
//     }
//     if(flag==true)
//     {
//         cout<<"Ascending order"<<endl;
//     }
//     else{
//         cout<<"Not in order"<<endl;
//     }
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "HeLlo woRLd";

    for (int i = 0; i < s.length(); i++) {
        // check if character is lowercase
        if ( (int) s[i] > 97 &&  (int) s[i] <= 122) {
            s[i] = s[i] - 32;   // ASCII conversion
        }
    }

    cout << "Uppercase string: " << s << endl;
    return 0;
}
