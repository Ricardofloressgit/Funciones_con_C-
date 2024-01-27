#include <iostream>
#include <random>

using namespace std;

// Funci�n para generar un n�mero aleatorio entre 0 y 99
int generarNumeroAleatorio(mt19937& gen) {
	uniform_int_distribution<> distrib(0, 99);
	return distrib(gen);
}

int main() {
	int N;
	cout << "Ingrese la cantidad de n�meros aleatorios a generar: ";
	cin >> N;
	
	random_device rd; // Dispositivo para obtener una semilla aleatoria
	mt19937 gen(rd()); // Motor de generador Mersenne Twister
	
	vector<bool> generado(100, false); // Vector para rastrear los n�meros ya generados
	
	cout << "N�meros aleatorios generados: " << endl;
	for (int i = 0; i < N; i++) {
		int numeroAleatorio;
		do {
			numeroAleatorio = generarNumeroAleatorio(gen);
		} while (generado[numeroAleatorio]); // Contin�a generando hasta que se encuentre un n�mero �nico
		
		generado[numeroAleatorio] = true; // Marca el n�mero como generado
		cout << numeroAleatorio << " ";
	}
	
	return 0;
}

