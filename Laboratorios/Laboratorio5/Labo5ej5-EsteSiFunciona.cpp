//Ejercicio 5

#include <iostream>
using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

struct Lnodo{
	int dato;
	struct Lnodo *sig;
};
typedef struct Lnodo Lista;
Lista *pInicio;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}
void insertarL(int num) {
    Lista *nuevo = new Lista;
    nuevo->dato = num;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}
/*
void insertarL(int num){
	Lista *nuevo = new Lista;
	nuevo->dato = num;
	nuevo->sig = NULL;
}*/
//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a, int numero){

    Arbol p = a;
    
    //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    //agregar el nuevo nodo
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << " " << a->info;
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << " " << a->info;
    }
}

void recorrerArbol(Arbol a){
    cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
    cout << "Recorrido IN orden:"; inorden(a); cout << endl;
    cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}
void mostrarLista() {
	Lista *s = pInicio;
	
    while (s != NULL) {
        cout<<"[" << (s->dato) << "]";
        s = s->sig;
    }
}
float promedioLista(){
	Lista *s = pInicio;
	float promedio=0; 
	int aux=0,total=0;
		while (s != NULL) {
        aux = s->dato;
        promedio = promedio+aux;
        s = s->sig;
        total++;
    }
	promedio= (promedio/total);
	return promedio;
}
void comparaDA(Arbol a,int num){
	if(a != NULL){
        if(num == a->info){
			insertarL(num);
			}
        comparaDA(a->izq,num);
        comparaDA(a->der,num);
		}

	}
void compararNum(Arbol a){
	int num=0;
	cout<<"(En un rango de 0 a 55 y -1 para salir)"<<endl;
	do{
	cout<<"Que numero quiere buscar del arbol"<<endl;
	cin>>num;
	
	comparaDA(a,num);
	
	}while(num!=-1);
	
	//Cuando termina el do while se muestra la lista
	cout<<endl;
	cout<<"La lista con los numeros encontrados en el arbol es : "<<endl;
    mostrarLista();
	
	//Se muestra el promedio
	cout<<endl;

	cout<<"El promedio de la lista es de: "<< promedioLista() <<endl; 
}

int main(){
    pInicio = NULL;
    
	int variable = 0;
    cout<<"Inicializando arbol..."<<endl;
    
    Arbol arbol = crearArbol(5);
    agregarNodo(arbol,1);
    agregarNodo(arbol,4);
    agregarNodo(arbol,6);
    agregarNodo(arbol,49);
    agregarNodo(arbol,27);
    agregarNodo(arbol,20);
    agregarNodo(arbol,13);
    agregarNodo(arbol,45);
    agregarNodo(arbol,34);
    agregarNodo(arbol,22);
    agregarNodo(arbol,11);
    agregarNodo(arbol,14);
    agregarNodo(arbol,55);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Buscar y sacar promedio\n\t2) Recorrer"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: compararNum(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}