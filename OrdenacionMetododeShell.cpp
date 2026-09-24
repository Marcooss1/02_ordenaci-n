#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de datos: ";
    cin >>n;

    int A[n];  

for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << " es: ";
        cin >> A[i];
    }

  
    for(int k=n/2;k >= 1;k = k / 2) {
       
    for (int i = k; i < n; i++) {
            int aux = A[i];
            int j = i;
            
            while (j - k >= 0 && A[j - k] > aux) {
                A[j] = A[j - k];
                j = j - k;
            }
            A[j] = aux; 
        }
    }
   
    cout << "Arreglo : ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
