#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Elemento "<<i+1<<" : ";
	cin>>arr[i];
	}

	for(int i=1;i<n;i++){
		int aux=arr[i];
		int k=i-1;
	while( k>0 || aux<arr[k] ){
		arr[k+1]=arr[k];
		k=k-1;
		
	}
	arr[k+1]=aux;
	}
cout<<"arreglo ordenado: "<<endl;
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

return 0;
}
