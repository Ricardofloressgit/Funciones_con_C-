#include <iostream>
#include <random>

using namespace std;

// Función para generar un número aleatorio entre 0 y 99
int generarNumeroAleatorio(mt19937& gen) {
	uniform_int_distribution<> distrib(0, 99);
	return distrib(gen);
}

int main() {
	int N;
	cout << "Ingrese la cantidad de números aleatorios a generar: ";
	cin >> N;
	
	random_device rd; // Dispositivo para obtener una semilla aleatoria
	mt19937 gen(rd()); // Motor de generador Mersenne Twister
	
	vector<bool> generado(100, false); // Vector para rastrear los números ya generados
	
	cout << "Números aleatorios generados: " << endl;
	for (int i = 0; i < N; i++) {
		int numeroAleatorio;
		do {
			numeroAleatorio = generarNumeroAleatorio(gen);
		} while (generado[numeroAleatorio]); // Continúa generando hasta que se encuentre un número único
		
		generado[numeroAleatorio] = true; // Marca el número como generado
		cout << numeroAleatorio << " ";
	}
	
	return 0;
}

