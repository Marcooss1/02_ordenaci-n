#include <iostream>
using namespace std;

int main() {
    int arreglo[20];
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    cout << "Ingrese los " << n << " elementos:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 ; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
