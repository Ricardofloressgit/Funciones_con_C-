#include <iostream>
using namespace std;
string palabra;

void cambiarvocales(char vocal,char numero)
{ int site = 0 ;
	do
	{
		site =palabra.find(vocal,site);
		if(site != -1)
			palabra[site]=numero;
		site++;
		
	}while (site !=0);
}
	
int main(int argc, char *argv[]) {
	palabra="Ricardo";
	cambiarvocales('a','4');
	cambiarvocales('e','3');
	cambiarvocales('i','1');
	cambiarvocales('o','0');
	cout<<"palabra "<<palabra<<endl;
	
		return 0;
	}
	



