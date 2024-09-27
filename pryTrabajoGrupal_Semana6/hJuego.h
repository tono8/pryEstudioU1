#pragma once
#include "hDependencias.h"
#include "hLibreria.h"
#include "hJugador.h"
#include "hArrEnemigo.h"
#include "hArrRecAgua.h"
#include "hArrRecSemillas.h"
#include "hArrRecReciclable.h"
#include "hArrArbol.h"
int generarAleatorio(int M, int N) {
	int tam = rand() % (N - M + 1) + M;//GENERAMOS EL NUMERO ALEATORIO
	return tam;
}
class clsnRecurso1 : public ArrAgua, public Agua {
protected:
    Jugador jugador;
    bool collected;
    int contadorAgua;

public:
    clsnRecurso1(Jugador& j, int x, int y) : Agua(x, y), jugador(j), collected(false), contadorAgua(0) {}

    void colisionAgua() {
        collected = false;
        for (int i = 0; i < arreglo3.size(); i++) {
            int _AguaX = arreglo3.at(i)->getAguaX();
            int _AguaY = arreglo3.at(i)->getAguaY();

            int jugadorX = jugador.getJX();
            int jugadorY = jugador.getJY();

            if ((jugadorX == _AguaX || jugadorX == _AguaX + 1 || jugadorX == _AguaX - 1) &&
                (jugadorY == _AguaY || jugadorY == _AguaY + 1 || jugadorY == _AguaY - 1)) {

                arreglo3.at(i)->borrar_agua();
                arreglo3.erase(arreglo3.begin() + i);
                i--;
                collected = true;
                contadorAgua++;
            }
        }
    }
    int getContadorAgua() {
        return contadorAgua;
    }
};
class clsnRecurso2 : public ArrSemillas, public Semillas {
protected:
    Jugador jugador;
    bool collected;
    int contadorSemillas;

public:
    clsnRecurso2(Jugador& j, int x, int y) : Semillas(x, y), jugador(j), collected(false), contadorSemillas(0) {
    }

    void colisionSemillas() {
        collected = false;
        for (int i = 0; i < arreglo4.size(); i++) {
            int _SmiX = arreglo4.at(i)->getSmiX();
            int _SmiY = arreglo4.at(i)->getSmiY();

            int jugadorX = jugador.getJX();
            int jugadorY = jugador.getJY();

            // Lógica de colisión
            if ((jugadorX == _SmiX || jugadorX == _SmiX + 1 || jugadorX == _SmiX - 1) &&
                (jugadorY == _SmiY || jugadorY == _SmiY + 1 || jugadorY == _SmiY - 1)) {
                arreglo4.at(i)->borrar_semilla();
                arreglo4.erase(arreglo4.begin() + i);
                i--;
                collected = true;
                contadorSemillas++;
            }
        }
    }
    int getContadorSemillas() {
        return contadorSemillas;
    }
};
class clsnRecurso3 : public ArrReciclables, public Reciclables {
protected:
    Jugador jugador;
    bool collected;
    int contadorReciclables;

public:
    clsnRecurso3(Jugador& j, int x, int y) : Reciclables(x, y), jugador(j), collected(false), contadorReciclables(0) {
    }

    void colisionReciclables() {
        collected = false;

        for (int i = 0; i < arreglo5.size(); i++) {
            int _ReciX = arreglo5.at(i)->getReciX();
            int _ReciY = arreglo5.at(i)->getReciY();

            int jugadorX = jugador.getJX();
            int jugadorY = jugador.getJY();
            if ((jugadorX == _ReciX || jugadorX == _ReciX + 1 || jugadorX == _ReciX - 1) &&
                (jugadorY == _ReciY || jugadorY == _ReciY + 1 || jugadorY == _ReciY - 1)) {

                arreglo5.at(i)->borrar_residuo();
                arreglo5.erase(arreglo5.begin() + i);
                i--;
                collected = true;
                contadorReciclables++;
            }
        }
    }
    int getContadorReciclables() {
        return contadorReciclables;
    }
};
class clsnEnemigo : public Jugador, public ArrEnemigo, public Enemigo {
protected:
    Jugador jugador;
public:
	clsnEnemigo(Jugador& j, int x, int y) : Enemigo(x, y) {};
	void clsnEnem() {
		for (int i = 0; i < arreglo1.size(); i++) {
			int _EnemX = arreglo1.at(1)->getEnmX();
			int _EnemY = arreglo1.at(1)->getEnmY();
			int jugadorX = jugador.getJX();
			int jugadorY = jugador.getJY();
			if ((jugadorX == _EnemX || jugadorX == _EnemX + 1 || jugadorX == _EnemX - 1) &&
				(jugadorY == _EnemY || jugadorY == _EnemY + 1 || jugadorY == _EnemY - 1)) {

			}
		}
	}
};
class Recurso {
    ArrSemillas semillasArr;
    ArrAgua aguaArr;
    ArrReciclables reciclablesArr;
public:
    Recurso() {
        srand(time(0));
    }
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
    }
};
class Juego : public Jugador {
private:
public:
	int fncIniciar() {
		mtrx* matriz = new mtrx();
        Recurso* objRecurso = new Recurso;

		Jugador jugador(57, 20);

        clsnRecurso1 colSemillas(jugador, 0, 0);
        clsnRecurso2 colAgua(jugador, 0, 0);
        clsnRecurso3 colReciclables(jugador, 0, 0);

        clsnEnemigo* fncEnem = new clsnEnemigo(jugador, 1, 1);

        while (1) {
            int Enem = generarAleatorio(3, 5);
            objRecurso->generarRecursos();

            matriz->mtrxFondo1();

            Console::Title = "xJ: " + fncEnem->getJX().ToString();
            Console::Title += "yJ: " + fncEnem->getJY().ToString();
        }
        return 0;
	}
};