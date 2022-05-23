

#include <iostream>
using namespace std;
int main()
{
	int a,y ;
	cout<<"Ingrese los numeros a comparar"<<endl;
	cin>>a;
	cin>>y;
	if (a==y)
	{
		cout<<"iguales"<<endl;
	}
else if (a>y)
		{
			cout<<a<<" es mayor"<<endl;
		}
		else{
			cout<<y<<"es mayor"<<endl;
}

	return 0;//sirve para comparar que numero es mayor
}