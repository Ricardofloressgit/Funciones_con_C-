#include <iostream>
using namespace std;
//DECLARAR VARIABLES GLOBALES
int n1,n2;

//DECLARAN FUNCIONES
/*int sumar(int num1, int num2)
{
	int suma;
	suma=num1+num2;
	return suma;
}
*/
//Realizar nueva funcion sumarNumeros donde no se pase parametros
int sumarNumeros()
{
	int suma;
	suma=n1+n2;
	return suma;
	//las funciones globales 
}

void solicitarNumeros()
{
	cout<<"Ingrese el primer numero:";
	cin>>n1;
	cout<<"Ingrese el segundo numero:";
	cin>>n2;
}

int main()
{
	int resuldato;
	//solicitar 2 numeros y despues mostrar el resultado.
	solicitarNumeros();
	cout<<"Suma de 2 numeros: "<<sumarNumeros()<<endl;
	
	//solicitar 2 numeros y despues mostrar el resultado.
	solicitarNumeros();
	cout<<"Suma de 2 numeros: "<<sumarNumeros()<<endl;
}
