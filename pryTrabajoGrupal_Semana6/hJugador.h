#pragma once
class Jugador {
protected:
    // Posicion del jugador
    int xJ = 57, yJ = 20;
    int saludJ = 10;
public:
    Jugador() {};
    Jugador(int x, int y) {};
    ~Jugador() {};
    int getJX() {
        return xJ;
    }
    int getJY() {
        return yJ;
    }
    int getSalud() {
        return saludJ;
    }
    void hitJ(int saludJ) {
        if (saludJ > 0) {
            saludJ--;
        }
    }
    void dibujarJ(int x, int y) {
        p(x + 1, y); b_c(1), f_c(11); cout << "°\\_/°";
        p(x + 1, y + 1); cout << "_(_)_";
        p(x, y + 2); cout << "(_____)";
        p(x + 2, y + 3); cout << "| |";
    }
    void borrarJ(int x, int y) {
        p(x + 1, y); b_c(1), f_c(15); cout << "     ";
        p(x + 1, y + 1); cout << "     ";
        p(x, y + 2); cout << "       ";
        p(x + 2, y + 3); cout << "   ";
    }
};