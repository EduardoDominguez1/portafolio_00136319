//Ejercicio 12
#include <iostream>

using namespace std;

int InveritrCifra(int a);

int main(){

int Cifra = 0;
int CifraInvertida  = 0;

	cout << "Ingrese cifra que desea invertir: " << endl;
    cin >> Cifra;
	
	CifraInvertida = InveritrCifra(Cifra);
	cout << "La cifra inversa es: " << CifraInvertida << endl;
    return 0;
}

int InveritrCifra(int a){

int CifraInv = 0;
while(a > 0){
    CifraInv = CifraInv*10 + a%10;
    a = a/10;
}
return CifraInv;
}
