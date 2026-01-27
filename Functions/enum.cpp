#include <iostream>
#include <string>
using namespace std;

enum commands {
    ADD,
    PRINT,
    COUNT,
    EXIT,
    INVALID,
    WORD_COUNT,
    VOWELCHECK
};

commands getCommands(const string& firstword) {
    if (firstword == "ADD") return ADD;
    if (firstword == "PRINT") return PRINT;
    if (firstword == "COUNT") return COUNT;
    if (firstword == "EXIT") return EXIT;
    if(firstword=="WORD_COUNT") return WORD_COUNT;
    if(firstword=="VOWELCHECK") return VOWELCHECK;
    return INVALID;
}

void print(const string data[], int count) {
    for (int i = 0; i < count; i++) {
        cout << i << " : " << data[i] << endl;
    }
}
void word_count(string data[], int count)
{
    int totalWords = 0;
    for (int i = 0; i < count; i++)
    {
        bool FlagWord = false;
        for (char ch : data[i])
        {
            if (ch != ' ' && !FlagWord)
            {
                totalWords++;
                FlagWord = true;
            }
            else if (ch == ' ')
            {
                FlagWord = false;
            }
        }
    }
    cout << "Total word count of data: " << totalWords << endl;
}
void vowelCount(string data[],int count){
    int vowelCount=0;
    string str="AEIOUaeiou";
    for(int i=0;i<count;i++)
    {
        for(char ch:data[i])
        {
        //    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        //         {
        //             vowelCount++;
        //         }
            if(str.find(ch) != string::npos)
            {
                vowelCount++;
            }
        }
    }
    cout<<"Total no of vowels : "<<vowelCount<<endl;
}


int main() {
    string data[100];
    int count = 0;
    string input;

    while (true) {
        getline(cin, input);

        int firstSpace = input.find(' ');
        string firstword = (firstSpace != string::npos) ? input.substr(0, firstSpace) : input;

        commands cmd = getCommands(firstword);

        switch (cmd) {
            case ADD:
                if (firstSpace != string::npos) {
                    data[count++] = input.substr(firstSpace + 1);
                } else {
                    cout << "No text provided to ADD\n";
                }
                break;

            case PRINT:
                print(data, count);
                break;

            case COUNT:
                cout << "Count is: " << count << endl;
                break;
            case WORD_COUNT:
                word_count(data,count);
                break;
            case VOWELCHECK:
                vowelCount(data,count);
                break;

            case EXIT:
                return 0;

            default:
                cout << "Enter correct input.\n";
        }
    }
}
