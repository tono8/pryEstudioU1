#pragma once
class Movil {
protected:
	int x, y;
	int dx, dy;
public:
	Movil() {
		x = y = 0;
		dx = dy = 0;
	};
	~Movil() {};
	virtual void mover() {
		x += dx;
		y += dy;
	}
};