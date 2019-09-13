#include <iostream>

using namespace std;

const int fil = 5;
const int col = 5;

int main(){
	
	int Matriz[fil][col] = {};
	
	/*
	[0,0][0,1][0,2][0,3][0,4]
	[ ]  [1,1][1,2][1,3][1,4]
	[][]      [2,3][2,4][2,5]
	[][][]         [3,4][3,5]
	[][][][]            [5,5]
	*/
	for(int f = 0; f < fil; f++){
		for(int c = 0; c < col; c++)
			if(f > c){ //Si se desea invertir la matriz se cambia ">" por "<"
				
			}else{
				cout << "Ingrese los datos que desea para llenar la matriz" << endl;
				cin >> Matriz[f][c];
			}
	}
	
	for(int f = 0; f < fil; f++){
		for(int c = 0; c < col; c++){
			cout << Matriz[f][c]<< " ";
		}cout<<endl;
	}
	return 0;
}
