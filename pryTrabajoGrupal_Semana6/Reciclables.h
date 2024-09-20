#pragma once
class Reciclables
{
protected:
	int ReciX;
	int ReciY;
public:
	Reciclables(int x, int y) {
		ReciX = x;
		ReciY = y;
	}
	void setReciX(int x) {
		ReciX = x;
	}
	void setReciY(int y) {
		ReciY = y;
	}
	void dibujar_residuo() {
		Console::SetCursorPosition(ReciX, ReciY);
		Console::ForegroundColor = ConsoleColor::DarkGray;
		cout << "@@@";
		Console::SetCursorPosition(ReciX, ReciY + 1);
		cout << "@@@";
	}
	void borrar_residuo() {

	}
	int getReciX() {
		return ReciX;
	}
	int getReciY() {
		return ReciY;
	}
	~Reciclables() {};
};