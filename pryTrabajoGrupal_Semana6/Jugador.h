#pragma once
class Jugador{
protected:
    int x_P = 37, y_P = 31;
public:
    Jugador() {};
	~Jugador() {};
    void borrar_jugador(int x, int y)
    {
        b_c(1), f_c(1);
        p(x + 2, y); cout << "  ";
        p(x, y + 1); cout << "      ";
        p(x + 2, y + 2); cout << "  ";
    }
    void dibuja_jugador(int x, int y)
    {
        b_c(1), f_c(10);
        p(x + 2, y); cout << char(219) << char(219);
        p(x, y + 1); cout << char(219) << char(219) << "  " << char(219) << char(219);
        p(x + 2, y + 2); cout << char(219) << char(219);
    }
};