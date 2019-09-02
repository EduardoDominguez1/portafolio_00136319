#include <iostream>
using namespace std;

struct Pais{
	char Nombre [30];
	char Capital[30];
	int Habitantes;
}Info_Pais[5];

struct Continente{
	char Nombre [30];
	struct Pais InfoPais;
}Continentes[5];

struct Global{
	struct Continente NombreContinente;
	struct Pais;
}Mundo[5];

int main(void) {
	
	
	
	return 0;
}
