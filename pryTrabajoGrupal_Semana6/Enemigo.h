#pragma once
class Enemigo
{
protected:
	int EnmX, EnmY;
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
		cout << " {@@}";
		Console::SetCursorPosition(EnmX, EnmY + 1);
		cout << " /\"\"\\ ";
	}
	void borrar_enemigo() {
		Console::SetCursorPosition(EnmX, EnmY);
		Console::ForegroundColor = ConsoleColor::Black;
		cout << "         ";
		Console::SetCursorPosition(EnmX, EnmY + 1);
		cout << "         ";
	}
	void mover_enemigo(int direccion) {
		if (direccion == 0) {
			if (EnmY - 1 != 0) {
				EnmY--;
			}
		}
		if (direccion == 1) {
			if (EnmY + 1 != 39) {
				EnmY++;
			}
		}
		if (direccion == 2) {
			if (EnmX + 1 != 79) {
				EnmX++;
			}
		}
		if (direccion == 3) {
			if (EnmX - 1 != 0) {
				EnmX--;
			}
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