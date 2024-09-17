#pragma once
class Jugador{
protected:
    // Posicion del jugador
    int x_P = 37, y_P = 31;
public:
    Jugador() {};
	~Jugador() {};

    // ===================================================== Primera version del jugador
    // 
    // ================================= Convertir a comentario al crear el nuevo diseño
    void dibujar_jugador(int x, int y) {
        b_c(1), f_c(10);
        p(x, y); cout << char(219) << char(223);
        p(x + 4, y); cout << char(223) << char(219);
        p(x + 2, y + 1); cout << char(219) << char(219);
        p(x, y + 2); cout << char(219) << char(220);
        p(x + 4, y + 2); cout << char(220) << char(219);
    }
    void borrar_jugador(int x, int y) {
        b_c(1), f_c(1);
        p(x, y); cout << "  ";
        p(x + 4, y); cout << "  ";
        p(x + 2, y + 1); cout << "  ";
        p(x, y + 2); cout << "  ";
        p(x + 4, y + 2); cout << "  ";
    }
    // =================================================================================
};