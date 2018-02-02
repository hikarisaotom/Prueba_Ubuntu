#include <string>
#include <iostream> 
using namespace std;

int main()
{
	int size=3;
	int matrix[3][3];

	 matrix[1][1]=100;

	cout<< matrix[1][1];
//Matriz en memoria dinamica(con apuntadores)
	//DEclarar
	int ** matrix2;

	matrix2= new int*[size];

	for ( int i=0; i<size; i++){
	matrix2[i]=new int [size];
	}
	//accesara sus elementos
	matrix2[1][1]=500;
	
	 cout << matrix2[1][1];

	//Para eliminar primero borramos por partes, lo ultimo creado es lo prime	ro eliminado.

	//Liberar Memoria.
	
	for (int i=0;i<size;i++){
			delete [] matrix2[i];
			matrix2[i]=NULL;
	}
	delete [] matrix2;
	matrix2=NULL;

	return 0; 
}

