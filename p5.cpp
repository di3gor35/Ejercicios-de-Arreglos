#include <iostream>
using namespace std;

int main(){
    int n, i, cmayor = 0, cmenor = 0;  
    float mayor, menor;
    cout << "Introduzca la cantidad de numeros a leer: ", cin >> n;

    float nums[n];
    for (i = 0; i < n; i++){
        cout << "Introduzca el numero " << i+1 << ": ", cin >> nums[i];
    }
    mayor = menor = nums[0];

    for (i = 1; i < n; i++){
        if (mayor < nums[i]){
            mayor = nums[i];
        }
        if (menor > nums[i]){
            menor = nums[i];
        }
    }

    for (float num : nums){
        if (num == mayor){
            cmayor++;
        }
        if (num == menor){
            cmenor++;
        }
    }

    cout << "El numero mayor es: " << mayor << " y se encuentra " << cmayor << " veces" << endl;
    cout << "El numero menor es: " << menor << " y se encuentra " << cmenor << " veces" << endl;

    return 0;
}