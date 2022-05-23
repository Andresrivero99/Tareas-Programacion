// Nombre del programa contador de monedas
//Archivo: contador.cpp
//Autor. Andres Rivero
//Fecha de elaboracion: 2022-05-02
//Fecha ultima actualizacion: 2022-05-20


#include<iostream>
using namespace std;
int main()
{
	int ar_n, ar_i=0, ar_i1=0, ar_i5=0;
	float ar_x, ar_s=0, ar_s1=0, ar_s5=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>ar_n;
	do
	{
	
	cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
	cin>>ar_x;
		ar_i = ar_i+1;
		ar_s = ar_s+ar_x;
		if(ar_x==ar_n)
		{
	        ar_i1= ar_i1+1;
	        ar_s1= ar_s1+ar_x;
		}
		else
		{
		ar_i5= ar_i5+1;
		ar_s5= ar_s5+ar_x;
		}
   }
	while(ar_i<ar_n);
	cout<<"Resultado es:"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<ar_i<<endl;
	cout<<"Cantidad total de dinero contado: "<<ar_s<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas:"<<ar_i1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<ar_s1<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas:"<<ar_i5<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<ar_s5<<endl;
	
	cout<<"//==>nombre del programa: contador de monedas"<<endl;
	cout<<"//==>autor: andres rivero"<<endl;
	cout<<"//==>archivo:contador de monedas.cpp"<<endl;
	cout<<"//==>fecha de elaboracion:  2022-05-02"<<endl;
	cout<<"//==>fecha de la ultima actualizacion: 2022.05-20"<<endl;
	
	
return 0; //sirve para conteo de monedas hasta llegar a su cantidad exacta puedes contar con la falcilidad que tu  quieras desde 0.10ctv o de 1.0

}