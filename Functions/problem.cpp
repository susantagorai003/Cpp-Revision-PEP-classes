#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> str;
void addtext()
{
    
    string text;
    cout<<"Enter your text: "<<endl;
    getline(cin,text);
    str.push_back(text);

}
void printtext()
{
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<" ";
    }
}
void countText()
{
    int count=0;
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        count+=1;
    }
    cout<<"Total count: "<<count<<endl;
}
int main()
{
    while(true)
    {
        int choice;
        cout<<"Enter your choice: "<<endl;
        cout<<"Enter 1 for addtext!!"<<endl;
        cout<<"Enter 2 for printing"<<endl;
        cout<<"Enter 3 for count"<<endl;
        cout<<"Enter 4 for exit"<<endl;
        cin>>choice;
        cin.ignore(); 
        switch(choice)
        {
            case 1:
                addtext();
                break;
            case 2:
                printtext();
                break;
            case 3:
                countText();
                break;
            case 4:
                exit(0);
                break;
            
        }
        
    }
}