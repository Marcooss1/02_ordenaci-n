#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "El elemento " << i + 1 << " es: ";
        cin >> arr[i];
    }


    for (int i = 1; i < n - 1; i++) {
        int menor = arr[i];
        int k = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < menor) {
                menor = arr[j];
                k = j;
            }
        }

        arr[k] = arr[i];
        arr[i] = menor;
    }

cout << "El arreglo ordenado: " << endl;
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
