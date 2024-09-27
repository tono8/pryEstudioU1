#pragma once
#include "hMovil.h"
class Enemigo : public Movil {
protected:
	int EnmX, EnmY, _xj, _yJ;
	int dX, dY;
public:
	Enemigo(int x, int y) {
		EnmX = x;
		EnmY = y;
		dX = dY = 0;
	}
	void setEnmX(int x) {
		EnmX = x;
	}
	void setEnmY(int y) {
		EnmY = y;
	}
	void dibujar_enemigo() {
		Console::SetCursorPosition(EnmX, EnmY);
		Console::ForegroundColor = ConsoleColor::Red;
		cout << "{@@}";
		Console::SetCursorPosition(EnmX, EnmY + 1);
		cout << "/\"\"\\";
	}
	void borrar_enemigo() {
		Console::SetCursorPosition(EnmX, EnmY);
		Console::ForegroundColor = ConsoleColor::Black;
		cout << "    ";
		Console::SetCursorPosition(EnmX, EnmY + 1);
		cout << "       ";
	}
	void mover_enemigo(int xJ, int yJ) {
		_xj = xJ;
		_yJ = yJ;
		// Moviendo el enemigo atravez el
		// Eje X
		if (x == _xj) {
			x += 0;
		}
		else if (x < _xj) {
			x += dx;
		}
		else if (x > _xj) {
			x -= dx;
		}
		// Moviendo el enemigo atravez el
		// Eje y
		if (y == _yJ) {
			y += 0;
		}
		else if (y < _yJ) {
			y += dy;
		}
		else if (y > _yJ) {
			y -= dy;
		}
	}
	int getEnmX() {
		return EnmX;
	}
	int getEnmY() {
		return EnmY;
	}
	~Enemigo() {};
};