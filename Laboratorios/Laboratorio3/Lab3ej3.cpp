#include <iostream>
#include <string>
using namespace std;

struct libro{
string titulo;
    int numPaginas;
    libro *sig;
};

typedef struct libro *Book;


void initialize(Book *s){
	*s  = NULL;
}

void push(Book *s, string nombre, int cantidad){
    struct libro *unNodo = new libro;
    unNodo->titulo = nombre;
    unNodo->numPaginas = cantidad;
    unNodo->sig = *s;

    *s = unNodo;
}

string busqueda(){
    string Abuscar;
    cin.ignore();
    cout<<"Que libro quiere buscar?\n"; cin>>Abuscar;
    return Abuscar;
}

int Mostrar(Book *s,string titulo,string Abuscar,int numpag){
	if(Abuscar == (*s)->titulo){
		int	x = (*s)->numPaginas;
		return x;
	}else{
		 struct libro *unNodo = *s;
        string e = (*s)->titulo;
    	int x = (*s)->numPaginas;
        *s = (*s)->sig;
        delete(unNodo);
    return Mostrar(*&s, e ,Abuscar,x);
	}
}

int main(){
    int numpag = 0;
    Book libreria;
    initialize(&libreria);
    cout<<"Bienvenido a tu libreria favorita "<<endl;
    
    cout<<"Libros apilados:"<<endl; 
    cout<<"Tarzan\nBambi\nNaruto\nAladin\n";
    cout<<"Presione una tecla para continuar...\n";
    
    push(&libreria,"Tarzan",3);
    push(&libreria,"Bambi",4);
    push(&libreria,"Naruto",55);
    push(&libreria, "Aladin",44); 
    
	string buscar = busqueda();
    numpag = Mostrar(&libreria,buscar,buscar,numpag);
    
	cout<<"El numero de paginas del libro es:"<< numpag<<endl;
  
    return 0;
}
