#include "Controladora.h"
int main() {
	wS(180, 60);

	clock_t t, ts; //VARAIBLES PARA SABER EL TIEMPO
	int secs = 0;
	ts = clock() + CLOCKS_PER_SEC;

	while (1) {
		if ((t = clock()) >= ts)
		{
			++secs;
			ts = t + CLOCKS_PER_SEC;
		}
		Console::Title = secs.ToString();
	}
	return 0;
}