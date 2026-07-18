#include <iostream>
using namespace std;

int main() {
    float nota;
    cout << "Ingrese su nota (0 a 20): ";
    cin >> nota;

    if (nota >= 10.5) {
        cout << "Estado: APROBADO" << endl;
    } else {
        cout << "Estado: DESAPROBADO" << endl;
    }

    return 0;
}
