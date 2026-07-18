#include <iostream>
using namespace std;

int main() {
    float nota;
    cout << "Ingrese su nota (0 a 20): ";
    cin >> nota;

    if (nota < 0 || nota > 20) {
        cout << "Error: la nota debe estar entre 0 y 20" << endl;
        return 1;
    } else if (nota >= 10.5) {
        cout << "Estado: APROBADO" << endl;
    } else {
        cout << "Estado: DESAPROBADO" << endl;
    }

    return 0;
}
