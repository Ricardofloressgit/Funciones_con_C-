#include <iostream>
using namespace std;int main(int argc, char *argv[]) {

	string lyu;
	lyu = "lenguaje c++";
	// concatenando una cadena con la variable 
	cout<<"la cadena dice " + lyu<<endl;
	cout<<"la longitud de la cadena es : "+ lyu.length()<<endl;
	//si el valor de retorno es 0, significa que la cadena no esta vacia 
	cout<<"¿está vacio?"<<lyu.empty()<<endl<<endl;
	lyu.append("!");// .append, añade el dato que esta dentro de los () a lo que se asigno a la variable lyu
	cout<<"la cadena modificada es : "<<" "<<lyu<<endl<<endl; //muestra el mensaje + lo que contiene la variable lyu y le añade lo que esta en los ()con .append
	string lyu_2;// se crea otra variable 
	lyu_2 = "i love too";// se le asigna datos
	lyu.swap(lyu_2);//.swap()ase que el contenido que tenga la primera variable lyu se intercambie por lo que tenga en lyu.swap lo que lleve en los ()
	cout<<"cambie la cadena modificada como : "<< lyu<<endl<<endl;//muestra el intercambio de datos
	//cout<<lyu_2;//prueba 
	
	int site;
	site=lyu.find('l',0);
	cout<<"la posición donde aparece l en la cadena es : "<<site<<endl;
	site=lyu.find('oo',0);
	cout<<"la posición donde aparece oo en la cadena es : "<<site<<endl;
	site =0;
	do{
		site=lyu.find('o',site);
		if (site == -1)
			cout<<"Busqueca completada, no hay otros elementos "<<endl;
		else
			cout<<"La posición donde aparece o en la cadena es :"<<site<<endl;
		site++;
		
	}while (site !=0);
	return 0;
}

