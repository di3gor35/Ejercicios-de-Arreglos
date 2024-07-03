#include <iostream>

using namespace std;

int main(){
    char frase[100];
    int cont = 0;

    cout << "Digite uma frase: ", cin.getline(frase, 100);
    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == '('){
            cont++;
        } else if(frase[i] == ')'){
            cont--;
        }
        if(cont < 0){
            break;
        }
    }

    if (cont == 0){
        cout << "El balanceo de los parentesis es correcto" << endl;
    } else {
        cout << "El balanceo de los parentesis es incorrecto" << endl;
    }


    return 0;
}