// Nombre del programa comparacion de numeros 
//Archivo: comparacion.cpp
//Autor. Andres Rivero
//Fecha de elaboracion: 2022-05-02
//Fecha ultima actualizacion: 2022-05-20

#include <iostream>
using namespace std;
int main()
{
	int ar_a,ar_y ;
	cout<<"Ingrese los numeros a comparar"<<endl;
	cin>> ar_a;
	cin>> ar_y;
	if (ar_a==ar_y)
	{
		cout<<"iguales"<<endl;
	}
else if (ar_a>ar_y)
		{
			cout<<ar_a<<" es mayor"<<endl;
		}
		else{
			cout<<ar_y<<"es mayor"<<endl;
}
	cout<<"//==>nombre del programa: comparacion de numeros"<<endl;
	cout<<"//==>archivo:comparacion.cpp"<<endl;
	cout<<"//==>autor: andres rivero"<<endl;
	cout<<"//==>fecha de elaboracion:  2022-05-02"<<endl;
	cout<<"//==>fecha de la ultima actualizacion: 2022.05-20";

	return 0;//sirve para comparar que numero es mayor
}