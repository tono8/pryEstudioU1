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
	void dibujar_agua(int x, int y) {
		p(x + 1, y); b_c(1), f_c(2); cout << "_";
		p(x, y + 1);cout << "/ \\";
		p(x + 1, y + 2); cout << "\\_/";
	}
	void borrar_agua(int x, int y) {
		p(x + 1, y); b_c(1), f_c(15); cout << " ";
		p(x, y + 1); cout << "   ";
		p(x + 1, y + 2); cout << "   ";
	}
	int getAguaX() {
		return AguaX;
	}
	int getAguaY() {
		return AguaY;
	}
	~Agua() {};
};