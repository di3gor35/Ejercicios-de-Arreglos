#include <iostream>

using namespace std;


int len(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

void mistrcat(char str1[], char str2[]){
    int lstr1 = len(str1);
    int lstr2 = len(str2);
    for (int i = 0; i < lstr2; i++){
        str1[i + lstr1] = str2[i];
    }
    str1[lstr1 + lstr2] = '\0';
}

int main(){
    char str1[100], str2[100];
    cout << "Ingrese la cadena str1: ", cin.getline(str1, 100);
    cout << "Ingrese la cadena str2: ", cin.getline(str2, 100);

    mistrcat(str1, str2);
    cout << "La cadena str1 es: " << str1 << endl;
    cout << "La cadena str2 es: " << str2 << endl;

    return 0;
}