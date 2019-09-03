#include <iostream>

using namespace std;

int Buscar(int[], int, int, int);

int main()
{
int tamanio = 8;
int numero, indice;	
int low = 0;
int high = tamanio-1;
 
int Arreglo[tamanio] = {1, 3, 4, 5, 17, 18, 31, 33};

cout <<  "Ingrese un numero entero positivo: " << endl;
cin >> numero;

indice = (Buscar(Arreglo,numero, low, high));

if(indice == -1)
cout << "El numero NO fue encontrado" << endl;
else{
cout <<"El numero SI esta en el arreglo. En la posicion: ["<< indice<<"]"<< endl;
cout << "Las posiciones se toman del 1 al 8" << endl;
}

return 0;	
}

int Buscar(int Arreglo[], int numero, int low, int high){ 

	int mid, indice= -1;
	
	if(high < low)
	{
		return -1;
	}
	else{
		mid = (low + high)/2;
	if (numero < Arreglo[mid])
	{
		return(Buscar(Arreglo,numero, low, mid-1));
	}
	else
	{
		if  (numero > Arreglo[mid])
		{
			return(Buscar(Arreglo,numero,mid+1,high));
		}
		else
		{
		 return mid+1;
		}
	}
	}
}
   
   
   
   
   
   
   
