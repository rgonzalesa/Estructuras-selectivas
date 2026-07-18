#include <iostream>
using namespace std;

int main() {
    float a, b;
    char operador;

    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese operador (+, -, *, /): ";
    cin >> operador;
    cout << "Ingrese otro numero: ";
    cin >> b;

    switch (operador) {
        case '+':
            cout << "Resultado: " << a + b << endl;
            break;
        case '-':
            cout << "Resultado: " << a - b << endl;
            break;
        case '*':
            cout << "Resultado: " << a * b << endl;
            break;
        case '/':
            cout << "Resultado: " << a / b << endl;
            break;
        default:
            cout << "Operador no valido" << endl;
    }

    return 0;
}
