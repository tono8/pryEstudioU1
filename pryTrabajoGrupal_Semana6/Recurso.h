#pragma once
#include "ArregloEnemigo.h"
#include "ArregloArbol.h"
#include "ArregloAgua.h"
#include "ArregloSemillas.h"
#include "ArregloReciclable.h"
int generarAleatorio(int M, int N) {

	int tam = rand() % (N - M + 1) + M;//GENERAMOS EL NUMERO ALEATORIO
	return tam;
}
class Recurso {
	ArrSemillas semillasArr;
	ArrAgua aguaArr;
	ArrEnemigo enemigoArr;
public:
	Recurso() {
		srand(time(0));
	}
	void generarRecursos() {
		for (int i = 0; i < 3; i++) {

			int x = generarAleatorio(12,110);
			int y = generarAleatorio(10,32);
			Semillas* nuevaSemilla = new Semillas(x, y);
			semillasArr.agregarSemillas(nuevaSemilla);
			nuevaSemilla->dibujar_semilla();
		}
		for (int i = 0; i < 3; ++i) {
			int x = generarAleatorio(12, 110);
			int y = generarAleatorio(10, 32);
			Agua* nuevoAgua = new Agua(x, y);
			aguaArr.agregarAgua(nuevoAgua);
			nuevoAgua->dibujar_agua(x, y);
		}

		for (int i = 0; i < 3; ++i) {
			int x = generarAleatorio(12, 110);
			int y = generarAleatorio(10, 32);
			Enemigo* nuevoEnemigo = new Enemigo(x, y);
			enemigoArr.agregarEnemigo(nuevoEnemigo);
			nuevoEnemigo->dibujar_enemigo();
		}
	}


};