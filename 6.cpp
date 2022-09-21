#include <iostream>
using namespace std;

int main () {
    int salario, tempo;
    cin >> salario >> tempo;

    if (tempo > 1) {
        if (tempo <= 10){
            cout << (0.1 * salario) << endl;
        }
        else {
            cout << ((25 * salario) / 100) << endl;
        }
    }

    else {
        cout << " sem abono" << endl;
    }

return 0;
}
