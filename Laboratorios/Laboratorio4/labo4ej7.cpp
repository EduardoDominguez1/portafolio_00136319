//Ejercicio 7 Elabore una funcion que recibe como parametro una lista simple y un numero entero.Luego elimine de esas listas todas las ocurrencias
#include <iostream>
using namespace std;

struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = pInicio;
   
    pInicio = nuevo;
}

void insertarFinal(int num) {
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

void agregarNumero(){
    int num = 0;
    cout << "Numero: ";
    cin >> num;
   
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(num);
                continuar = false;
            break;
            case 2: insertarFinal(num);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->sig;
    }
}

void borrarOcurrencias(){
    Nodo *s = pInicio;
    int borrar=0;
    cout<<"Que dato desea borrar de la lista:"<<endl;
    cin>>borrar;
    if(pInicio==nullptr){
        cout<<"La lista esta vacia"<<endl;
    }else if(borrar!=s->dato){
        //Quiero que compare y si es diferente que apunte al siguiente.
        s = s->sig;
    }else{
        //Quiero que compare y si es igual borre el dato.
        Nodo *temp = s;
        temp
        delete(s);
       
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
                agregarNumero();
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


