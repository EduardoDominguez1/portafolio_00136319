#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void listaInversa(Nodo *);

Nodo *lista = NULL;

int main(){
   int opcion,dato;
   do{
       
       cout<<endl;
       cout<<"MENU"<<endl;
       cout<<"1. Insertar elementos en la lista"<<endl;
       cout<<"2. Mostrar elementos de la lista"<<endl;
       cout<<"3. Invertir lista"<<endl;
       cout<<"4. Salir"<<endl;
       cout<<"Opcion: "<<endl;
       cin>>opcion;
    switch(opcion){  
        case 1: cout<<"Digite un numero:";
                cin>>dato;
                insertarLista(lista,dato);
                cout<<endl;
                break;
        case 2: mostrarLista(lista);
                break;
        case 3: cout<<"La lista invertida es:"<<endl;
                listaInversa(lista);
                cout<<endl;
    }           
   }while(opcion != 4);
    
    return 0;
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    
    nuevo_nodo->dato =n;
    Nodo *aux1 = lista;
    Nodo *aux2;
    
    while((aux1 != NULL)&&(aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    
    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
    
    cout<<"Elemento: "<<n<<" insertado en la lista correctamente"<<endl;
}

void mostrarLista(Nodo *lista){
    
    Nodo *actual = new Nodo();
    actual = lista;
    
    while(actual != NULL){
        cout<<actual->dato<<"->";
        actual = actual->siguiente;
    }
}

void inverlista(Nodo *lista){
    
    
    
//Aun no termino ): no se como invertirlos  