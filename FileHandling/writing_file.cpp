#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("test.txt") ;
    if(!fout)
    {
        cout<<"file not found"<<endl;
    }
    fout << "new data"<<endl;
    fout.close();
    return 0;
}