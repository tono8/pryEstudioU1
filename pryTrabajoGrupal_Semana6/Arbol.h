#pragma once
class Arbol
{
protected:
	int ArbolX;
	int ArbolY;
public:
	Arbol(int x, int y) {
		ArbolX = x;
		ArbolY = y;
	}
	void setArbolX(int x) {
		ArbolX = x;
	}
	void setArbolY(int y) {
		ArbolY = y;
	}
	void dibujar_arbol() {
		
	}
	int getArbolX() {
		return ArbolX;
	}
	int getArbolY() {
		return ArbolY;
	}
	~Arbol() {};
};