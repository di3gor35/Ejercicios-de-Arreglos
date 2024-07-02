#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> nombres;
    string str;
    string nombre;
    cout << "Para ordenar los nombres alfabeticamente" << endl;
    cout << "Primero, introduzca los nombres: ";
    getline(cin, str);

    istringstream iss(str); 
    while (iss >> nombre) {
        nombres.push_back(nombre);
    }

    sort(nombres.begin(), nombres.end());
    for (string ch : nombres){
        cout << ch << " ";
    }

    return 0;
}