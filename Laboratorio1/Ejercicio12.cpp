//Ejercicio 12
#include <iostream>

using namespace std;

int main(){

int Cifra = 0;
int CifraInv = 0;

cout << "Ingrese cifra que desea invertir: " << endl;
    cin >> Cifra;


while(Cifra > 0){
    CifraInv = CifraInv*10 + Cifra%10;
    Cifra = Cifra/10;
}
 cout << "La cifra inversa es: " << CifraInv << endl;

    return 0;
}