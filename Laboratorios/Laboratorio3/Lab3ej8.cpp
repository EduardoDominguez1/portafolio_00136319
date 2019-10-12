#include <iostream>
#include <vector>

using namespace std;


vector<int> lista;


void convBinario(int n){

    int residuo;

    if(n==0)
     lista.insert(lista.begin(), n);
 
    else if(n==1)

     lista.insert(lista.begin(), n);

    else{

        residuo = (n%2);

        n=n/2;

     lista.insert(lista.begin(), residuo);

        convBinario(n);
    }
}


void mostrarLista() {
    for (int i = 0; i < lista.size(); i++)
        cout << lista[i];
}


int main()
{

    int entero;

    cout<<"Ingrese un numero entero en base 10: "<<endl;
    cin>>entero;

    cout<<"El numero en binario es: ";

    convBinario(entero);

    mostrarLista();

    return 0;
}
