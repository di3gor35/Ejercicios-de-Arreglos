#include <iostream>
#include <cctype>
#include <string>
#include <windows.h>
using namespace std;

string ponerMayuscula(string str) {
    string result;
    bool newWord = true;

    for (char ch : str) {
        if (isspace(ch)) {
            newWord = true;
            result += ch;
        } else if (newWord) {
            result += toupper(ch);
            newWord = false;
        } else {
            result += tolower(ch);
        }
    }
    
    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string input;
    cout << "Escribe una oración: ",
    getline(cin, input);
    string output = ponerMayuscula(input);
    cout << output << endl;
    return 0;
}
