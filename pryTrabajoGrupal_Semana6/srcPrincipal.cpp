#include "hJuego.h"
int main() {
	wS(120, 36);
	Juego* objJuego = new Juego;
	LOGO_EQUIPO();
	while (1) {
		int opc = MENU();
		switch (opc)
		{
		case 1:
			system("cls");
			INSTRUCCIONES();
			objJuego->fncIniciar();
		case 2:
			system("cls");
			INSTRUCCIONES_ALT();
			break;
		case 3:
			system("cls");
			CREDITOS();
			break;
		case 4:
			system("cls");
			return 0;
		}
	}
	return 0;
}