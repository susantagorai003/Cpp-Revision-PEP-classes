#include<iostream>
#include<fstream>
using namespace std;

void readbyCharacter(ifstream& file) {
    char ch;
    while (file.get(ch)) {
        cout << ch;
    }
}
void readbyWord(ifstream& file) {
    string word;
    while (file >> word) {
        cout << word << " ";
    }
}
void readbyLine(ifstream& file) {
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
}
int main() {
    ifstream file("test.txt");
    if (!file) {
        cout << "Error in opening file" << endl;
        return -1;
    }

   
    readbyCharacter(file);
    file.clear(); // Cleans the buffer
    file.seekg(0); // Reset the cursor to the beginning of the file

    readbyWord(file);
    file.clear(); // Cleans the buffer
    file.seekg(0); // Reset the cursor to the beginning of the file

    readbyLine(file);

    file.close();
    return 0;
}