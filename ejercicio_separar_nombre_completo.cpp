#include <iostream>
using namespace std;
string nombrecompleto,nombre,paterno,materno;
//ingresar una cadena nombre, ape paterno y ap materno
// EJ. juan perz flor
// primero van los apellidos 
void datos()
	
{
	//en esta linea se esta buscando y substraendo el nombre
	int pini, pfinal;
	pini=0;
	pfinal=nombrecompleto.find(" ",pini);//Actualizando la posición inicial al carácter después del primer espacio
	nombre =nombrecompleto.substr(pini,(pfinal-pini));
	
	//en esta linea se esta buscando y substranendo el apellido paterno
	pini = pfinal + 1 ;//se esta actualizando el
	pfinal=nombrecompleto.find(" ",pini);// se puede copiar es lo mismo que la linea de arriba es para buscar el segundo espacio 
	paterno = nombrecompleto.substr(pini, pfinal - pini);

	//en esta linea se esta buscando y substraendo el apellido materno
	pini = pfinal + 1 ;//se esta actualizando el
	materno = nombrecompleto.substr(pini);

	nombre[0] = toupper(nombre[0]);  
	paterno[0] = toupper(paterno[0]);  
	materno[0] = toupper(materno[0]);  
}	
	

int main(int argc, char *argv[]) {
	//string datos,ape_paterno;
	
	cout<<"ingresa tu nombre completo ";
	getline(cin, nombrecompleto);
	datos();
	cout<<"Apellido paterno : "<<paterno<<endl;
	cout<<"apellido materno : "<<materno<<endl;
	cout<<"nombre : "<<nombre<<endl;
	return 0;
}

