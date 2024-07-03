#include <iostream>

using namespace std;


int len(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

void mistrcpy(char str1[], char str2[]){
    for (int i = 0; i < len(str2); i++){
        str1[i] = str2[i];
    }
    str1[len(str2)] = '\0';
}

int main(){
    char str2[100];
    cout << "Ingrese la cadena str2: ", cin.getline(str2, 100);
    char str1[len(str2)];

    mistrcpy(str1, str2);
    cout << "La cadena str1 es: " << str1 << endl;
    cout << "La cadena str2 es: " << str2 << endl;

    return 0;
}