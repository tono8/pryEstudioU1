#pragma once
#include "ArregloEnemigo.h"//Librerias 1
#include "Recurso.h"//Librerias 2
#include "Jugador.h";//Jugador
#include "ArregloAgua.h"
#include "ArregloEnemigo.h"
#include "ArregloReciclable.h"







//class ColisionEnemigo : public Jugador, public ArrEnemigo {//Creando clase con herencia aplicada

//public://atrapamos al raton -> constructor de nuestra clase -> luego de gato -> luego de ratonera
//	ColisionEnemigo(int x, int y) : Jugador(x_P, y_P), ArrEnemigo() {
//
//	}
//
//
//
//	void quitarRatoncito() {// Quitando el ratoncito
//
//		for (int i = 0; i < arreglo.size(); i++) {//vamos desde el inicio del vector hast el ultimp
//
//			int _raX = arreglo.at(i)->retornarRatonX();//Obtenemos la posicion del raton en X
//			int _raY = arreglo.at(i)->retornarRatonY();//lo mismo pero en y
//			//Si el gato esta dentro de estos limites, entonces significa que pudo cazar al ratoncito
//			if ((cuerpoGatoX == _raX || cuerpoGatoX == _raX + 1 == cuerpoGatoX == _raX - 1 || cuerpoGatoX == _raX + 2 || cuerpoGatoX == _raX - 2 || cuerpoGatoX == _raX + 3 == cuerpoGatoX == _raX - 3 || cuerpoGatoX == _raX + 4 || cuerpoGatoX == _raX - 4) == true &&
//				(cuerpoGatoY == _raY || cuerpoGatoY == _raY + 1 == cuerpoGatoY == _raY - 1 || cuerpoGatoY == _raY + 2 || cuerpoGatoY == _raY - 2 || cuerpoGatoY == _raY + 3 || cuerpoGatoY == _raY - 3 || cuerpoGatoY == _raX + 4 || cuerpoGatoY == _raX - 4) == true) {
//				//pasamos a limpiar el espacio usado en la consola del raton
//				arreglo.at(i)->limpiarRaton();
//				arreglo.at(i)->setCuerpoRatonX(0);//seteamos la posiciona 0a Y
//				arreglo.at(i)->setCuerpoRatonY(0);//seteamos la posicion en 0 a Y
//				arreglo.at(i)->limpiarRaton();//Limpiamos una ultima vez el raton
//				arreglo.erase(arreglo.begin() + i);//eliminamos el ratoncito del arreglo.
//				Console::Title = "Lo Cazaste";//imprimimos un titulo pequeno en la parte de arriba de la consola
//			}
//
//
//		}
//	}
//};
//
//class AtraparonElQueso : public Raton, public Quesos {
//public://atrapan el queso -> constructor de nuestra clase -> luego del raton -> luego del queso
//	AtraparonElQueso(int x, int y) : Raton(x, y), Quesos() {
//
//	}
//	void quitarQueso() {// Quitando el ratoncito
//
//		for (int i = 0; i < arreglo2.size(); i++) {//vamos desde el inicio del vector hast el ultimp
//
//			int _qzX = arreglo2.at(i)->retornarQuesoX();//Obtenemos la posicion del queso en X
//			int _qzY = arreglo2.at(i)->retornarQuesoY();//lo mismo pero en y
//			//Si el raton esta dentro de estos limites, entonces significa que pudo comerse el queso
//			if ((cuerpoRatonX == _qzX || cuerpoRatonX == _qzX + 2 || cuerpoRatonX == _qzX + 3 || cuerpoRatonX == _qzX + 4 || cuerpoRatonX == _qzX + 5 || cuerpoRatonX == _qzX + 6 || cuerpoRatonX == _qzX + 7) == true && (cuerpoRatonY == _qzY) == true) {
//				//pasamos a limpiar el espacio usado en la consola del queso
//				arreglo2.at(i)->limpiarQueso();
//				arreglo2.at(i)->setCuerpoQuesoX(0);//seteamos la posiciona 0a Y
//				arreglo2.at(i)->setCuerpoQuesoY(0);//seteamos la posicion en 0 a Y
//				arreglo2.at(i)->limpiarQueso();//Limpiamos una ultima vez el queso
//				arreglo2.erase(arreglo2.begin() + i);//eliminamos el queso del arreglo.
//			}
//
//
//		}
//	}
//};
