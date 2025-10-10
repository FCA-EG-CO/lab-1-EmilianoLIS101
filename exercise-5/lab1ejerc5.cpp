// En este programa recibiremos un numero en kilometros y lo devolveremos en millas

#include <iostream>

using namespace std;

int main(){
    float kilometros;
    float millas;
    cout << "Ingrese la cantidad de kilometros que desea convertir a millas" << endl;
    cin >> kilometros;

    millas = kilometros * 0.621371;

    cout << kilometros << " kilometros son " << millas << " millas" << endl;
    return 0;
}
