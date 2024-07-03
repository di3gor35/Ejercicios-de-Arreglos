#include <iostream>

using namespace std;


int mistrcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    char str1[100], str2[100];

    cout << "Ingrese la cadena str1: ", cin.getline(str1, 100);
    cout << "Ingrese la cadena str2: ", cin.getline(str2, 100);

    int result = mistrcmp(str1, str2);

    if (result == 0){
        cout << "Las cadenas son iguales" << endl;
    } else if (result == 1){
        cout << "La cadena str1 es mayor que la cadena str2" << endl;
    } else {
        cout << "La cadena str2 es mayor que la cadena str1" << endl;
    }

    return 0;
}
