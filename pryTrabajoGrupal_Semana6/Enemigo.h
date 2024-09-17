#pragma once
class Enemigo
{
protected:
	int EnmX;
	int EnmY;
public:
	Enemigo(int x, int y) {
		EnmX = x;
		EnmY = y;
	}
	void setEnmX(int x) {
		EnmX = x;
	}
	void setEnmY(int y) {
		EnmY = y;
	}
	void dibujar_enemigo() {
		// Dibujar al humano aqui
	}
	void borrar_enemigo() {

	}
	int getEnmX() {
		return EnmX;
	}
	int getEnmY() {
		return EnmY;
	}
	~Enemigo() {};
};