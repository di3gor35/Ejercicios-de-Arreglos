#include <iostream>
#include <cctype>
#include <string>
#include <windows.h>
using namespace std;

string ponerSaltosLinea(string str) {
    string result;
    for (char ch : str) {
        if (isspace(ch)) {
            result += "\n";
        } else {
            result += ch;
        }
    }
    
    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string input;
    cout << "Escribe una oración: ",
    getline(cin, input);
    string output = ponerSaltosLinea(input);
    cout << output << endl;
    return 0;
}