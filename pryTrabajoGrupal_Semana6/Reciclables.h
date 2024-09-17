#pragma once
class Reciclables
{
protected:
	short ReciX;
	short ReciY;
public:
	Reciclables(short x, short y) {
		ReciX = x;
		ReciY = y;
	}
	void setReciclablesX(int x) {
		ReciX = x;
	}
	void setReciclablesY(int y) {
		ReciY = y;
	}
	~Reciclables();
};