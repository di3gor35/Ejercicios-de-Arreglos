#include <iostream>
using namespace std;

int main(){
    string str;
    char letter;
    int count = 0;
    cout << "Para hallar la cantidad de ocurrencias de una letra en una cadena" << endl;
    cout << "Introduzca una cadena: ";
    getline(cin, str);
    cout << "Introduzca la letra a buscar: ", cin >> letter;

    for (char ch : str){
        if (ch == letter){
            count++;
        }
    }
    cout << "La letra " << letter << " aparece " << count << " veces en la cadena \"" << str << "\"" << endl;
    return 0;
}