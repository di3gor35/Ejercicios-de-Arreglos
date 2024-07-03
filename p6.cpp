#include <iostream>
#include <vector>

using namespace std;

int main(){
    float sumapar = 0, sumaimpar = 0;
    vector<float> nums = {1, 8, 7, 45, 8, 14};

    for (size_t i = 0; i < nums.size(); i += 1){
        if (i % 2 == 0){
            sumapar += nums[i];
        } else {
            sumaimpar += nums[i];
        }
    }
    /*
    for(size_t i = 1; i < nums.size(); i += 2){
        sumaimpar += nums[i];
    }
    */
    cout << "La suma de los numeros en posiciones pares es: " << sumapar << endl;
    cout << "La suma de los numeros en posiciones impares es: " << sumaimpar << endl;

    return 0;
}