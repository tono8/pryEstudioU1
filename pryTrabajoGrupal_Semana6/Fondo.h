#pragma once
class Presentacion {
//			De acuerdo al enunciado, aqui se pondria un logo o nonmbre del equipo (de no tener uno solo decir "GRUPO 9")
//			Caracteres identificados [#9GOPRU] - adicionales []
private:
public:
	Presentacion() {};
	~Presentacion() {};
	//KNIGHTSX.TDF (Knights) - N° 539 - By:	The Silent Killer & Roy/SAC
	void KNIGHTSX_NUM_15(int x, int y) {
		p(x + 3, y); b_c(1), f_c(15); cout << char(219) << char(219) << char(219);
		p(x + 9, y); cout << char(219) << char(219) << char(219);
		p(x + 3, y + 1); cout << char(219) << char(219) << char(219);
		p(x + 9, y + 1); cout << char(219) << char(219) << char(219);
		p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
		p(x + 2, y + 3); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 3); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 2, y + 4); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 8, y + 4); cout << char(176) << char(176) << char(176);
		p(x + 2, y + 5); cout << char(178) << char(178) << char(178);
		p(x + 8, y + 5); cout << char(178) << char(178) << char(178);
		p(x, y + 6); b_c(1); cout << char(219) << char(219); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(219) << char(219) << char(219) << char(219); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(219) << char(219) << char(219);
		p(x + 1, y + 7); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 7, y + 7); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 1, y + 8); b_c(7), f_c(1); cout << char(176) << char(176) << char(176);
		p(x + 7, y + 8); cout << char(176) << char(176) << char(176);
	}
	void KNIGHTSX_SEPARADOR_15(int x, int y) {
		p(x + 2, y); b_c(1), f_c(15); cout << char(219); f_c(14); cout << char(219) << char(219);
		p(x + 2, y + 1); f_c(15); cout << char(219) << char(219) << char(219);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 3); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 1, y + 5); cout << char(178) << char(178) << char(178);
		p(x, y + 6); b_c(1); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x, y + 7); b_c(1); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x, y + 8); b_c(7), f_c(1); cout << char(176) << char(176) << char(176);
	}
	void KNIGHTSX_1_15(int x, int y) {
		p(x + 2, y + 1); b_c(1), f_c(15); cout << char(219) << char(219) << char(219);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 3); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 1, y + 5); cout << char(178) << char(178) << char(178);
		p(x, y + 6); b_c(1); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x, y + 7); b_c(1); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
	}
	void KNIGHTSX_G_15(int x, int y) {
		p(x + 5, y); b_c(1), f_c(15); cout << char(220) << char(220) << char(220) << char(220) << char(219) << char(220) << char(220);
		p(x + 2, y + 1); cout << char(220) << char(219) << char(219) << char(219) << char(223) << char(223) << char(223) << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 2); cout << char(219) << char(219) << char(219) << char(223);
		p(x + 9, y + 2); cout << char(219) << char(219) << char(219);
		p(x, y + 3); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176); b_c(1), f_c(15); cout << char(221);
		p(x + 8, y + 3); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176); b_c(1), f_c(15); cout << char(221);
		p(x, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(7), f_c(15); cout << char(176) << char(176) << char(176);
		p(x + 6, y + 5); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(219) << char(219) << char(221);
		p(x, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 6); cout << char(219) << char(219) << char(219);
		p(x + 1, y + 7); cout << char(223); b_c(7), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(220) << char(220) << char(220) << char(219) << char(219) << char(219);
		p(x + 5, y + 8); cout << char(223) << char(223); b_c(7), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
	}
	void KNIGHTSX_O_15(int x, int y) {
		p(x + 4, y); b_c(1), f_c(15); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 2, y + 1); b_c(15), f_c(7); cout << char(176) << char(176) << char(176); b_c(1), f_c(15); cout << char(223) << char(223) << char(223) << char(219) << char(219) << char(219) << char(220);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 2); cout << char(222) << char(219) << char(219) << char(219);
		p(x + 1, y + 3); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 8, y + 3); b_c(1), f_c(15); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176); b_c(1), f_c(15); cout << char(221);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178);
		p(x + 8, y + 4); cout << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(1), f_c(7); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 8, y + 5); b_c(7), f_c(15); cout << char(176) << char(176) << char(176);
		p(x, y + 6); b_c(1), f_c(7); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 7, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 7); cout << char(219) << char(219) << char(219) << char(220) << char(220); b_c(7), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
		p(x + 2, y + 8); cout << char(223); b_c(7), f_c(1); cout << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
	}
	void KNIGHTSX_P_15(int x, int y) {
		p(x + 2, y); b_c(1), f_c(15); cout << char(220) << char(220) << char(219) << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 1, y + 1); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176) << char(176); b_c(1), f_c(15); cout << char(223) << char(223) << char(223) << char(219) << char(219) << char(219) << char(221);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 3); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 7, y + 3); b_c(1), f_c(15); cout << char(220); b_c(15), f_c(1); cout << char(176); f_c(7); cout << char(176); b_c(1), f_c(15); cout << char(223);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(1); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x, y + 7); cout << char(219) << char(219) << char(219);
		p(x, y + 8); b_c(7), f_c(1); cout << char(176) << char(176) << char(176);
	}
	void KNIGHTSX_R_15(int x, int y) {
		p(x + 2, y); b_c(1), f_c(15); cout << char(220) << char(220) << char(219) << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 1, y + 1); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176) << char(176); b_c(1), f_c(15); cout << char(223) << char(223) << char(223) << char(219) << char(219) << char(219) << char(221);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 3); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 7, y + 3); b_c(1), f_c(15); cout << char(220); b_c(15), f_c(1); cout << char(176); f_c(7); cout << char(176); b_c(1), f_c(15); cout << char(223);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(1); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 5, y + 5); b_c(7), f_c(15); cout << char(176) << char(176) << char(176);
		p(x, y + 6); b_c(1), f_c(7); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 5, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x, y + 7); cout << char(219) << char(219) << char(219);
		p(x + 6, y + 7); cout << char(219); b_c(7), f_c(1); cout << char(176) << char(176);
		p(x, y + 8); cout << char(176) << char(176) << char(176);
		p(x + 6, y + 8); b_c(1), f_c(7); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
	}
	void KNIGHTSX_U_15(int x, int y) {
		p(x + 3, y); b_c(1), f_c(15); cout << char(220) << char(220);
		p(x + 9, y); cout << char(220) << char(220);
		p(x + 2, y + 1); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 8, y + 1); b_c(1), f_c(15); cout << char(222) << char(219) << char(219) << char(219);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 2); cout << char(222) << char(219) << char(219) << char(219);
		p(x + 1, y + 3); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 8, y + 3); b_c(1), f_c(15); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176); b_c(1), f_c(15); cout << char(221);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178);
		p(x + 8, y + 4); cout << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(1), f_c(7); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 8, y + 5); b_c(7), f_c(15); cout << char(176) << char(176) << char(176);
		p(x, y + 6); b_c(1), f_c(7); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 7, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 7); cout << char(219) << char(219) << char(219) << char(220) << char(220); b_c(7), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
		p(x + 2, y + 8); cout << char(223); b_c(7), f_c(1); cout << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
	}
	void PRESENTACION_539_15_v2(int x, int y) {
		KNIGHTSX_G_15(x, y);
		KNIGHTSX_R_15(x + 12, y);
		KNIGHTSX_U_15(x + 23, y);
		KNIGHTSX_P_15(x + 35, y);
		KNIGHTSX_O_15(x + 46, y);
		KNIGHTSX_NUM_15(x + 18, y + 11);
		//KNIGHTSX_1_15(x + 32, y + 11);
	}
};