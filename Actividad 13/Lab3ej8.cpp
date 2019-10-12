#include <iostream>
#include <vector>
asd
using namespace std;


vector<int> lista;


void convertir(int n){

    int residuo;

    if(n==0)

     lista.insert(lista.begin(), n);

    else if (n==1)

     lista.insert(lista.begin(), n);

    else{

        residuo = (n%2);

        n=n/2;

     lista.insert(lista.begin(), residuo);

        convertir(n);

    }

}


void mostrarLista() {

    for (int i = 0; i < lista.size(); i++)
 
        cout << lista[i];

}


int main()
{

    int num;

    cout<<"Ingrese un numero entero en base 10: ";

    cin>>num;

    cout<<"\nEl numero en binario es: ";

    convertir(num);

    mostrarLista();

    return 0;

}