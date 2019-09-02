#include <iostream>

using namespace std;

int producto(int,int);

int main()
{
	int a, b, Total;
	
	cout << "introduzca primer numero: " << endl;
	cin >> a;
	
	cout << "introduzca segundo numero: " << endl;
	cin >> b;
	
	Total = producto(a,b);
	
	cout << "producto:  " << Total << endl;
	
	return 0;
}

  int producto(int a,  int b)
  {
  	if(b == 1)
  		return a;
  	else
  		return a + producto(a, b-1);
  }