#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

void generarNumeros(int randnums[], int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        randnums[i] = rand() % 900 + 100;
    }
}


float calcularMedia(int randnums[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += randnums[i];
    }
    return static_cast<float> (suma) / n;
}

float calcularMediana(int randnums[], int n) {
    int temp;
    // Implementar la función calcularMediana
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (randnums[i] > randnums[j]) {
                temp = randnums[i];
                randnums[i] = randnums[j];
                randnums[j] = temp;
            }
        }
    }
    if (n % 2 == 0) {
        return (randnums[n / 2 - 1] + randnums[n / 2]) / 2.0;
    } else {
        return randnums[n / 2];
    }
    // Fin de la implementación
}

vector<int> calcularModa(int randnums[], int n, vector<int> modas) {
    int maxCount = 1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (randnums[j] == randnums[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            //cout << "Esta la moda";
            modas.clear();
            modas.push_back(randnums[i]);
            maxCount = count;
        } else if (count == maxCount && randnums[i] != randnums[i - 1] && maxCount > 1) {
            //cout << "Agrega el otro numero";
            modas.push_back(randnums[i]);
        }
    }
    return modas;
}

int main() {
    const int n = 30;
    int randnums[n];
    float media, mediana;
    vector<int> modas;

    generarNumeros(randnums, n);

    media = calcularMedia(randnums, n);
    mediana = calcularMediana(randnums, n);
    modas = calcularModa(randnums, n, modas);
    cout << "La media es: " << media << endl;
    cout << "La mediana es: " << mediana << endl;
    if (modas.size() == 0) {
        cout << "No hay moda" << endl;
    } else if (modas.size() == 1) {
        cout << "La moda es: " << modas[0] << endl;
    } else {
        cout << "Las modas son: ";
        for (int moda : modas) {
            cout << moda << " ";
        }
        cout << endl;
    }
    return 0;
}

