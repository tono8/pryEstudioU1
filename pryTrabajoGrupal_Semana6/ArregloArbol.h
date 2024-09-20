#pragma once
#include "Arbol.h"
class ArrArbol
{
protected:
	vector<Arbol*>arreglo2;
	int x, y;
public:
	ArrArbol() {
		arreglo2 = vector<Arbol*>();
	};
	void agregarArbol(Arbol* nuevoRecurso2) {
		arreglo2.push_back(nuevoRecurso2);
	}
	Arbol* obtenerArbol(int indice2) {
		return arreglo2.at(indice2);
	}
	int sizeArbol() {
		return arreglo2.size();
	}
	vector<Arbol*> retornar() {
		return arreglo2;
	}
	~ArrArbol() {};

	void dibujarArbol() {
		Console::SetCursorPosition(x, y);
		Console::ForegroundColor = ConsoleColor::DarkGreen;
		cout << "    c|c    ";
		Console::SetCursorPosition(x, y + 1);
		cout << "  cc|||cc  ";
		Console::SetCursorPosition(x, y + 2);
		cout << "ccc||||ccc ";
		Console::SetCursorPosition(x, y + 1);
		cout << "    ||      ";
	}
};