#include <iostream>

using namespace std;

double raiz(double, double);

int main(){
	
	double num = 0;
	float auxR = 0;
	double raizNum = 0;
	
	cout << "Ingrese un numero entero positivo" << endl;
		cin >> num;
		
	raizNum =	raiz(num, auxR);
	cout << "La raiz es: " << raiz(num, auxR) << endl;
	return 0;

}

double raiz(double num, double auxR){
	
	double aux = 50;
	
	auxR = aux;
	aux = (((num/aux)+aux)/2);

	if(auxR - aux<=0.001){
		return auxR;
	}
	else
		return raiz(num, aux);
}

