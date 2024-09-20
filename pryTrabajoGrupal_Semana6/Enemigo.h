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
		cout << " °\\/°";
		Console::SetCursorPosition(EnmX, EnmY + 1);
		cout << "  __  ";
		Console::SetCursorPosition(EnmX, EnmY + 2);
		cout << " [L l] ";
		Console::SetCursorPosition(EnmX, EnmY + 3);
		cout << " ==== ";
	}
	void borrar_enemigo() {
		Console::SetCursorPosition(EnmX, EnmY);
		Console::ForegroundColor = ConsoleColor::Black;
		cout << "     ";
		Console::SetCursorPosition(EnmX, EnmY + 1);
		cout << "     ";
		Console::SetCursorPosition(EnmX, EnmY + 2);
		cout << "     ";
		Console::SetCursorPosition(EnmX, EnmY + 3);
		cout << "     ";
	}
	int getEnmX() {
		return EnmX;
	}
	int getEnmY() {
		return EnmY;
	}
	~Enemigo() {};
};