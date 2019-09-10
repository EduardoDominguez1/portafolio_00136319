#include <iostream>

using namespace std;

void hanoi(int n,char a,char c,char b)
{
	if(n==1)
	{
		cout << "Mover el disco " << n <<" desde " << a << " hasta " << c << endl;
	}else
	{
		hanoi(n-1,a,b,c);
		cout << "Mover el disco " << n <<" desde " << a << " hasta " << c << endl;
		hanoi(n-1,b,c,a); 
	}	
}

int main(){
	
	int n;
	char a,b,c;
	
	cout << "Los palos donde se ponen los discos son A-B-C" << endl;
	cout << endl;
	
	cout << "Cuantos discos utilizara??" << endl;
		cin >> n;
	hanoi(n,'A','C','B');
	
	return 0;
}
