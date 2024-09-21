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
	ArrReciclables reciclablesArr;
	ArrEnemigo enemigoArr;
	
public:
	Recurso() {
		srand(time(0));
	}
	//limites son x12 y10 a x110 y32
	int leftlimitx = 12;
	int rightlimitx = 110;
	int uplimity = 10;
	int downlimity = 32;

	void generarRecursos() {
		for (int i = 0; i < 10; i++) {

			int x = generarAleatorio(leftlimitx, rightlimitx);
			int y = generarAleatorio(uplimity, downlimity);
			Semillas* nuevaSemilla = new Semillas(x, y);
			semillasArr.agregarSemillas(nuevaSemilla);
			nuevaSemilla->dibujar_semilla();
		}
		for (int i = 0; i < 10; ++i) {
			int x = generarAleatorio(leftlimitx, rightlimitx);
			int y = generarAleatorio(uplimity, downlimity);
			Agua* nuevoAgua = new Agua(x, y);
			aguaArr.agregarAgua(nuevoAgua);
			nuevoAgua->dibujar_agua(x, y);
		}
		for (int i = 0; i < 10; ++i) {
			int x = generarAleatorio(leftlimitx, rightlimitx);
			int y = generarAleatorio(uplimity, downlimity);
			Reciclables* nuevoReciclables = new Reciclables(x, y);
			reciclablesArr.agregarReciclables(nuevoReciclables);
			nuevoReciclables->dibujar_residuo();
		}
		for (int i = 0; i < 7; ++i) {
			int x = generarAleatorio(leftlimitx, rightlimitx);
			int y = generarAleatorio(uplimity, downlimity);
			Enemigo* nuevoEnemigo = new Enemigo(x, y);
			enemigoArr.agregarEnemigo(nuevoEnemigo);
			nuevoEnemigo->dibujar_enemigo();
		}
	}


};