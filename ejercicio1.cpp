#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Error: no se permiten numeros negativos" << endl;
        return 1;
    } else if (numero % 2 == 0) {
        cout << "El numero es PAR" << endl;
    } else {
        cout << "El numero es IMPAR" << endl;
    }

    return 0;
}
