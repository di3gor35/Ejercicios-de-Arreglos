#include <iostream>
#include <vector>

using namespace std;

bool esOrdenado(vector<int> nums, int n){
    for(int i = 0; i < n - 1; i++){
        if(nums[i] > nums[i + 1]){
            return false;
        }
    }
    return true;
}

void llenarVector(vector<int> &nums){
    
    for (size_t i = 0; i < nums.size(); i++){
        cout << "Ingrese el elemento " << i + 1 << ": ", cin >> nums[i];
    }
}


int main(){
    int n;
    bool es_ordenado;
    cout << "Ingrese la cantidad de elementos del vector: ", cin >> n;
    vector<int> nums(n);

    llenarVector(nums);
    
    es_ordenado = esOrdenado(nums, n);
    
    if(es_ordenado){
        cout << "El vector esta ordenado" << endl;
    } else {
        cout << "El vector no esta ordenado" << endl;
    }

    return 0;
}