#include <iostream>

using namespace std;

void sumarElementos_Arreglo(int arreglo[], int n, int &spositivos, int &snegativos){
    for (int i = 0; i < n; i++){
        if (arreglo[i] > 0){
            spositivos += arreglo[i];
        } else if (arreglo[i] < 0){
            snegativos += arreglo[i];
        }
    }
}

int main(){
    int n, spositivos = 0, snegativos = 0;
    cout << "Ingrese el numero de elementos del arreglo: ", cin >> n;
    int arreglo[n];
    
    //Llenar el arreglo
    for (int i = 0; i < n; i++){
        cout << "Ingrese el elemento " << i+1 << ": ", cin >> arreglo[i];
    }

    sumarElementos_Arreglo(arreglo, n, spositivos, snegativos);
    cout << "La suma de los elementos positivos es: " << spositivos << endl;
    cout << "La suma de los elementos negativos es: " << snegativos << endl;

    return 0;
}