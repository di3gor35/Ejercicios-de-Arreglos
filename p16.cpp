#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    string cadena;
    int digit, cdig = 0;
    char digits[50];
    cout << "Escribe una cadena: ", getline(cin, cadena);

    for(size_t i = 0; i < cadena.length(); i++){
        if (isdigit(cadena[i])){
            digits[cdig] = cadena[i];
            cdig++;
        }
    }
    digit = atoi(digits);
    cout << digit + 2;
    return 0;
}