/* Ejercicio 13- Determine que hace la funcion recursiva. Digite una funcion que cumpla el mismo proposito */

#include <iostream>

using namespace std;


int main(){

int n = 0;
int suma = 0;

cout << "Ingrese el valor: " << endl;
	cin >> n;
	
for(int i = 0; i <= n; i++){
	
	suma += i;
}
	cout << "La suma de los numeros en decenso es: " << suma << endl;\
	
	return 0;
}
