#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

vector<int> agregarElementos_Vector(int n){
    vector<int> numv;
    
    for (char i : to_string(n)){
        numv.push_back(i - '0');
    }
    return numv;
}

bool esCapicua(vector<int> numv){
    
    //cout << "El tipo de dato de numv es " << typeid(decltype(numv)::value_type).name() << endl;
    for (size_t j = 0; j < numv.size(); j++){
        if (numv[j] != numv[numv.size() - 1 - j]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    bool esCapicu = true;
    vector<int> numvs;

    cout << "Escribe un numero para comprobar si es capicua: ", cin >> n;

    numvs = agregarElementos_Vector(n);

    esCapicu = esCapicua(numvs);

    if (esCapicu){
        cout << "El numero " << n << " es capicua" << endl;
    } else {
        cout << "El numero " << n << " no es capicua" << endl;
    }
    return 0;
}