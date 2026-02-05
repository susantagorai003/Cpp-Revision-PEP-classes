// . Write a program that takes two integers as input and prints their sum
// ONLY if both numbers are positive; otherwise print "Invalid input".
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > 0 && num2 > 0) {
        cout << "Sum: " << (num1 + num2) << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}