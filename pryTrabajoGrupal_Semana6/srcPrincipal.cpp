//SINOPSIS:			El jugador tomará el rol de un "Guardián del Medio Ambiente" cuya misión es restaurar el equilibrio natural 
//					de un ecosistema que ha sido dañado por la contaminación y la deforestación

#include "Controladora.h"
int main() {
	wS(180, 60);

	clock_t t, ts; //VARAIBLES PARA SABER EL TIEMPO
	int secs = 0;
	ts = clock() + CLOCKS_PER_SEC;

	Presentacion* objPresentacion;
	objPresentacion = new Presentacion;

	Juego* objJuego;
	objJuego = new Juego;

	while (1) {
		if ((t = clock()) >= ts)
		{
			++secs;
			ts = t + CLOCKS_PER_SEC;
		}
		Console::Title = secs.ToString();
		//objPresentacion->PRESENTACION_539_15_v2(11,10);
		objJuego->nivel();
	}
	return 0;
}