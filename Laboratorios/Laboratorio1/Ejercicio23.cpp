/*
Suma de numeros complejos 

z1 = 6-4i    , z2 = -5+2i

z1 + z2 = (6-4i) + (-5+2i)
		= 6-3i-5+2i
		= 1-i

*/
#include <iostream>

using namespace std;

struct Complejo{
	float Preal, Pimaginaria;
}z1,z2;

void PedirDatos();
Complejo SumandoComplejos(Complejo, Complejo);
	
int main (){
	
	PedirDatos();
	
	Complejo x = SumandoComplejos(z1,z2);
	cout<<endl;
	cout << "Respuesta de la suma de los numeros complejos: " << x.Preal << " , " << x.Pimaginaria<<"i"<< endl;
	
	return 0;
}

void PedirDatos(){
	cout << "(En parte imaginaria solo poner el valor numerico) " << endl;
	cout << endl;
	
	cout << "Ingrese el primer numero complejo: " << endl;
		cout << "Parte Real: "; cin>> z1.Preal;
		cout << "Parte Imaginaria: "; cin>> z1.Pimaginaria; 
	
	cout << endl;
	
	cout << "Ingrese el Segundo numero complejo: " << endl;
		cout << "Parte Real: "; cin>> z2.Preal;
		cout << "Parte Imaginaria: "; cin>> z2.Pimaginaria; 
}

Complejo SumandoComplejos(Complejo z1, Complejo z2){
	
	z1.Preal += z2.Preal;
	z1.Pimaginaria += z2.Pimaginaria;
	
	return z1;
}











