#include<iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int primeCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }
    cout << "Number of prime elements in the array: " << primeCount << endl;
}
