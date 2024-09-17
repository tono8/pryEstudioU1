#pragma once
class Agua
{
protected:
	int AguaX;
	int AguaY;
public:
	Agua(int x, int y) {
		AguaX = x;
		AguaY = y;
	}
	void setAguaX(int x) {
		AguaX = x;
	}
	void setAguaY(int y) {
		AguaY = y;
	}
	void dibujar_agua() {
		// Dibujar semillas aqui
	}
	void borrar_agua() {

	}
	int getAguaX() {
		return AguaX;
	}
	int getAguaY() {
		return AguaY;
	}
	~Agua() {};
};