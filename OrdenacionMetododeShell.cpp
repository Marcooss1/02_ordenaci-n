#include<iostream>
using namespace std;
void ShellSort(int A[];int n){
	int k=n+1;
	
	while(k>1){
		k=k/2;
		
		for(int i=k+1;i<=n;i++){
			int aux=A[i];
			int j=i;
			
			while(j-k>=1&&A[j-k]>aux){
				A[j]=A[j-k];
				j=j-k;
			}
			A[j]=aux;
		}
	}
}
int main(){
	int n;
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cout<<"Elemento "<<i+1<< " es: ";
		cin>>A[i];
	}
}
}
