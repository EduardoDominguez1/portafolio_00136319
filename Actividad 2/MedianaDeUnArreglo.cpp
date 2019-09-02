#include <iostream>
using namespace std;

float EncontrarMediana(int *puntero, int total);

int main ()
{
		int total=0;
		int a[total];
		float mediana= 0;
		
	cout<<"Digite el tamano del arreglo : "<<endl;
	cin>>total;//7 [0][1][2][3][4][5][6]
	
	cout<<"**DIGITE LOS DATOS DE FORMA ORDENADA**"<<endl;
		
		for(int i = 0; i < total; i++){//[0][1][2][3][4][5][6]
		cout << "Digite un numero: ";
		cin >> a[i];
		}

	mediana = EncontrarMediana(a,total);
	cout<<"El valor de la mediana es de: "<< mediana <<endl;
	return 0;
}

float EncontrarMediana(int *puntero, int total){
	int posicion = total/2;
	float DatoMedio=0.0;
	
	if(total%2 == 0)
	{
		
	DatoMedio = (float) (*(puntero+(posicion-1))+*(puntero+(posicion)))/2.0;
	}else{
	DatoMedio = *(puntero+(posicion));
	}
return DatoMedio;
}

