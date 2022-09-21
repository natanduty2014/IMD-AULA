#include <iostream>
using namespace std;

int main () {
    double peso, altura, imc;
    cin >> peso >> altura;

    imc = peso / (altura * altura);

    cout << "imc: " << imc << endl;
    if (imc < 18.5) {
        cout << "abaixo de peso" << endl;
    }

    else if (imc < 25) {
        cout << "peso normal" << endl;
    }

    else if (imc < 30) {
        cout << "sobre peso" << endl;
    }

    else if (imc < 35) {
        cout << "obesidade grau 1" << endl;
    }

    else if (imc < 40) {
        cout << "obesidade grau 2" << endl;
    }

    else {
        cout << "obesidade morbida" << endl;
    }

    return 0;
}
