#pragma once
class Semillas
{
protected:
	int SmiX;
	int SmiY;
public:
	Semillas(int x, int y) {
		SmiX = x;
		SmiY = y;
	}
	void setSmiX(int x) {
		SmiX = x;
	}
	void setSmiY(int y) {
		SmiY = y;
	}
	void dibujar_semilla() {
		// Dibujar semillas aqui
	}
	void borrar_semilla() {

	}
	int getSmiX() {
		return SmiX;
	}
	int getSmiY() {
		return SmiY;
	}
	~Semillas() {};
};