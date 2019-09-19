//Obtener el elemento al fondo de la pila, dejando la pila vacia.

#include <iostream>
using namespace std;

struct nodo{
    float elemento;
    struct nodo *siguiente;
};
typedef struct nodo *Pila;

void initialize(Pila *s){
    *s = NULL;
}

bool empty(Pila *s){
    return *s == NULL;
}

void push(Pila *s, float e){
    struct nodo *unNodo;
    unNodo = (struct nodo *)malloc(sizeof(struct nodo));
    unNodo->elemento = e;
    unNodo->siguiente = *s;
    
    *s = unNodo;
    //cout << "Curiosidad: " << &unNodo << "\t";
    cout << "Nueva direccion: " << *s << endl;
}

float pop(Pila *s){
    if(!empty(s)){
        struct nodo *unNodo = *s;
        float e = (*s)->elemento;
        *s = (*s)->siguiente;
        delete(unNodo);
        cout << "Nueva direccion: " << *s << endl;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}

float top(Pila *s){
    if(!empty(s)){
        float e = (*s)->elemento;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}

float ultimoElem(Pila *s){
 	int ultimo= 0;
 	
 	while(!empty(s)){
 		struct nodo *unNodo = *s;
        float e = (*s)->elemento;
        *s = (*s)->siguiente;
        delete(unNodo);
		 ultimo = e; 	
 	} return ultimo;
}


int main(){
    Pila unaPila;
    initialize(&unaPila);
    cout << "Direccion de unaPila: " << &unaPila << endl;
    cout << "Contenido de unaPila: " << unaPila << endl;
    
    cout << endl << "PUSH" << endl;
    push(&unaPila, 10);
    push(&unaPila, 2);
    push(&unaPila, 3);
    push(&unaPila, 77);
	
	      
    cout << "El ultimo elemento de la pila es :" << endl;
	cout << ultimoElem(&unaPila) << endl;

    return 0;
}