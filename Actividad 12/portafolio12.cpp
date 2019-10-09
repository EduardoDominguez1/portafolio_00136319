#include <iostream>
#include <vector>
using namespace std;

struct TPupas{
    string sabor;
    int cantidad;
    bool arroz;
};
typedef struct TPupas Pupusas;

Pupusas solicitarPupusas(){
    Pupusas p;
    cout << "Revueltas (R) -- Frijol con queso (FQ) -- Queso (Q) -- Ayote (A) -- Chicharron (C)\n"; cin >> p.sabor;
    cout << "Cuanta va a querer? ";   cin >> p.cantidad;
    cout << "Maiz (0) Arroz (1) "; cin >> p.arroz;
    if(p.arroz==1)
    p.arroz = true;
    return p;
}

void mostrarPupusas(Pupusas p){
    cout << "Sabor: " << p.sabor << endl;
    cout << "Cantidad: " << p.cantidad << endl;
    cout << "Harina: " << p.arroz << endl;
    cout << endl;
}

vector<Pupusas> lista;

void agregarPasatiempo(){
    Pupusas p = solicitarPupusas();
    bool continuar = true;
    cout<<"Se las pongo a la plancha primero? (Principio y final de la lista)"<<endl;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarPupusas(lista[i]);
}

int main(){
    cout << "\t ~Pupuseria Dona Evita~ " << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Pedir pupusitas\n\t2) Ver pedido"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPasatiempo();
            break;
            case 2: cout << "Mostrando........ Maiz = 0  ---  Arroz = 1 \n\n";
                mostrarLista();
            break;
            case 3: cout<<"Vuelva pronto! Gracias por visitarnos!"<<endl;
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}