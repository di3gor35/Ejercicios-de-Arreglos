#include <iostream>
#include <vector>
using namespace std;


void solicitarVentas(float ventas[]){
    for(int i = 0; i < 12; i++){
        cout <<"Ingrese la venta " << i + 1 << ": ", cin >> ventas[i];
    }
}

float calcularPromedio(float ventas[], int lon){
    float suma = 0;
    for (int i = 0; i < lon; i++){
        suma += ventas[i];
    }
    return suma / 12.0;
}

void porcentajesVenta(float ventas[], float promedio, float &pmin, float &preg, float &pexc, vector<int> &mesesexc){
    float minimo = 40 * promedio / 100.0;
    float excelente = 75 * promedio / 100.0;

    int cmin, creg, cexc;
    cmin = creg = cexc = 0;

    for (int i = 0; i < 12; i++){
        if (ventas[i] < minimo){
            cmin++;
        } else if (ventas[i] <= excelente){
            creg++;
        } else {
            mesesexc.push_back(i);
            cexc++;
        }
    }

    pmin = (cmin * 100.0) / 12;
    preg = (creg * 100.0) / 12;
    pexc = (cexc * 100.0) / 12;

}

void mostrarMesesExc(vector<int> mesesexc, string meses[]){
    cout << "Meses con venta excelente: ";
    for (int i : mesesexc){
        cout << meses[i] << " ";
    }
    cout << endl;
}

int main(){
    int i;
    float ventas[12];
    vector<int> mesexc;
    float promedio, pmin, preg, pexc;
    string meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    
    solicitarVentas(ventas);
    i = (sizeof(ventas)) / (sizeof(ventas[0]));

    promedio = calcularPromedio(ventas, i);
    porcentajesVenta(ventas, promedio, pmin, preg, pexc, mesexc);

    cout << "El promedio de ventas es: " << promedio << endl;
    cout << "Porcentaje de ventas menores al 40%: " << pmin << "%" << endl;
    cout << "Porcentaje de ventas entre 40% y 75%: " << preg << "%" << endl;
    cout << "Porcentaje de ventas mayores a 75%: " << pexc << "%" << endl;

    mostrarMesesExc(mesexc, meses);

    return 0;
}