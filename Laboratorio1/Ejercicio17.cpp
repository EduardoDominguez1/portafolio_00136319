#include <iostream>

using namespace std;

int main(){
	
int tamanio = 10;
int enteros[tamanio];
float suma = 0; 
float promedio = 0;
int aux = 0;

cout << "Escriba 10 numeros enteros: " << endl;

for(tamanio = 0; tamanio <10; tamanio++){
	cout << " Ingrese un entero: " << endl;
	cin >> enteros[tamanio];	
}
	
while(aux < 10){
	tamanio = aux;
	suma += enteros[tamanio];
	aux++;
}

cout << "La suma de los enteros es: " << suma << endl;
promedio = suma/10;
cout << "El promedio de los enteros es: " << promedio << endl;

	return 0;
}
