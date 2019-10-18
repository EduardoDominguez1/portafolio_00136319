#include <iostream>
#include <vector>

using namespace std;

struct TNodo{
	int dato;
	struct TNodo *sig;
};

typedef struct TNodo Nodo;

	Nodo *pInicio;//inicio de lista
	Nodo *pFinal;//final de la lista

typedef struct ttnodo orden;

void insertar() {
	int num = 0;
	cout<<"Que numero desea insertar: "<<endl;
	cin >> num;
	
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = NULL;
   
    if (pInicio == NULL) {
        pInicio = nuevo;
        pFinal = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
        pFinal->sig = nuevo;//en teoria esto hace que el final sea siempre el ultimo agregado
        pFinal=nuevo;
    }
}


void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->sig;
    }
}

void invertirLista(){
	Nodo *i, *j;
	i=pInicio;
	j=pFinal;
	char buscado, aux;
	bool ordenado=true;
	buscado=i->dato;
	while(ordenado){
		if(i->dato==buscado){
			ordenado=false;
		}
		else{
			for(i=pInicio;i->sig!=NULL;i=i->sig){
				j=i->sig;
				aux=i->dato;
				i->dato = j->dato;
				j->dato = aux;

			}
		}
	}
	while (i != NULL) {
        cout << (i->dato) << endl;
        i = i->sig;
}
}//No logre invertirla ): 

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
   
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Ver numeros\n\t3)InvertirLista"
            << "\n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                insertar();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout << "Analizando..." << endl;
                invertirLista();
            break;
            case 4: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
	
