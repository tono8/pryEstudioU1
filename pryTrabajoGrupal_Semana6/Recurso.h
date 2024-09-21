#pragma once
#include "ArregloEnemigo.h"
#include "ArregloArbol.h"
#include "ArregloAgua.h"
#include "ArregloSemillas.h"
#include "ArregloReciclable.h"

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
			int x = rand() % 120;
			int y = rand() % 36;
			Semillas* nuevaSemilla = new Semillas(x, y);
			semillasArr.agregarSemillas(nuevaSemilla);
			nuevaSemilla->dibujar_semilla();
		}
		for (int i = 0; i < 3; ++i) {
			int x = rand() % 120;
			int y = rand() % 36;
			Agua* nuevoAgua = new Agua(x, y);
			aguaArr.agregarAgua(nuevoAgua);
			nuevoAgua->dibujar_agua(x, y);
		}

		for (int i = 0; i < 3; ++i) {
			int x = rand() % 120;
			int y = rand() % 36;
			Enemigo* nuevoEnemigo = new Enemigo(x, y);
			enemigoArr.agregarEnemigo(nuevoEnemigo);
			nuevoEnemigo->dibujar_enemigo();
		}
	}


};