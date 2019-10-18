//Ejercicio 7 Elabore una funcion que recibe como parametro una lista simple y un numero entero.Luego elimine de esas listas todas las ocurrencias
//Compila en lo de C++ Online XDDD en Dev se queda congelado al eliminar dato (y si pones muchos datos en lista se buguea)
#include <iostream>
using namespace std;

struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertar() {
	int num = 0;
	cout<<"Que numero desea insertar: "<<endl;
	cin >> num;
	
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = NULL;
   
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->sig;
    }
}

void borrarOcurrencias(){
    int n=0,borrar=0;

    cout<<"Que dato desea borrar de la lista:"<<endl;
    cin>>borrar;
    
	Nodo *s = NULL;
	Nodo *aux = NULL;
    s=pInicio;
    
	if(s==NULL){
        cout<<"La lista esta vacia"<<endl;
    }
    while(s!=NULL){
    	
    	if(borrar == s->dato){
        	if(aux==NULL){
        		pInicio = s->sig;
        }
	else
      	aux->sig = s->sig;
        delete(s);
	   }
	   aux=s;
	   s=s->sig;
    }
} 

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
   
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Ver numeros\n\t3)Eleminar repetidos"
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
                borrarOcurrencias();
            break;
            case 4: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
