#includ#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}
void Reduce(int A[], int inicio, int final) {
 int izq = inicio;
    int der = final;
    int pos = izq;   
    int cen = 1;     

    while (cen == 1) {
        cen = 0;

        
    while (A[pos] <= A[der] && pos != der) {
            der = der - 1;
        }

    if (pos != der) {
            intercambiar(A[pos], A[der]);
            pos = der;

        
            while (A[pos] >= A[izq] && pos != izq) {
                izq = izq + 1;
            }

            if (pos != izq) {
                intercambiar(A[pos], A[izq]);
                pos = izq;
                cen = 1;
            }
        }

 
        if (pos - 1 > inicio) {
            Reduce(A, inicio, pos - 1);
        }

     
        if (pos + 1 < final) {
            Reduce(A, pos + 1, final);
        }
    }
}

void QuickSort(int A[], int n) {
    Reduce(A, 0, n - 1);
}

int main() {
    int n;
    cout << "Ingrese la cantidad de datos: ";
    cin >> n;

    int A[n];

   
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << " es: ";
        cin >> A[i];
    }

QuickSort(A, n);

 
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
