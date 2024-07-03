#include <iostream>

using namespace std;

int len(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

bool esPersona(char nombre[], char apellido[]){
    bool nuevapalabra = true;
    int con = 0;
    for (int j = 0; j < len(nombre); j++){
        if (nombre[j] == ' '){
            nuevapalabra = true;
        } else if (nuevapalabra){
            if (nombre[j] == apellido[0]){
                for (int i = 0; i < len(apellido); i++){
                    if (apellido[i] != nombre[j + i]){
                        cout << "\nse fue" << endl;
                        cout << con << endl;
                        break;
                    } else {
                        con++;
                    }
                }
                if (con == len(apellido)){
                    return true;
                } else {
                    con = 0;
                }
            }
            nuevapalabra = false;
        }
    }
    return false;
    
}

int main(){
    char nombres[100];
    char apellido[25];
    bool espersona;
    cout << "Ingrese el nombre: ", cin.getline(nombres, 100);
    cout << "Ingrese el apellido a buscar: ", cin.getline(apellido, 25);

    espersona = esPersona(nombres, apellido);

    if (espersona){
        cout << "El apellido pertenece a la persona" << endl;
    } else {
        cout << "El apellido no pertenece a la persona" << endl;
    }

    return 0;
}