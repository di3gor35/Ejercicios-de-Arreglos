#include <iostream>
#include <vector>

using namespace std;

vector<int> agregarElementos_Vector(int n){
    vector<int> numv;
    
    for (char i : to_string(n)){
        numv.push_back(i - '0');
    }
    return numv;
}

void rotarElementos_Vector(vector<int> &numv){
    int aux = numv[numv.size()-1];

    for (size_t i = numv.size()-1; i > 0; i--){
        numv[i] = numv[i-1];
    }
    numv[0] = aux;
}

int main (){
    //  Profesor estoy considerando al vector como un numeral y cada elemento un digito
    int n;
    vector<int> numvs;

    cout << "Escribe un numero para agregar al vector: ", cin >> n;

    numvs = agregarElementos_Vector(n);

    rotarElementos_Vector(numvs);
    /*
    for (auto it = numvs.begin(); it != numvs.end(); it++){
        cout << *it;
    }
    for (size_t i = 0; i < numvs.size(); i++){
        cout << numvs[i];
    }
    */
    for (int it : numvs){
        cout << it;
    }

    return 0;
}