#pragma once
#include "hJugador.h"
//"Innecesario pero se ve bien"
//ENLACE DE LAS FUENTES DE LETRA: http://www.roysac.com/thedrawfonts-tdf.html#1
void FONT59X_2_10(int x, int y) {
	p(x, y); b_c(1), f_c(7); cout << char(220); b_c(7), f_c(10); cout << char(176); f_c(15); cout << char(176) << char(177); b_c(15), f_c(7); cout << char(176); b_c(7), f_c(15); cout << char(177) << char(176); f_c(10); cout << char(176); b_c(1), f_c(7); cout << char(220);
	p(x, y + 1); b_c(7), f_c(10); cout << char(176) << char(177) << char(177); b_c(10), f_c(1); cout << char(176); b_c(7); cout << char(220) << char(220); b_c(10); cout << char(176); b_c(7), f_c(10); cout << char(177) << char(177) << char(176);
	p(x, y + 2); cout << char(177); b_c(10), f_c(7); cout << char(176) << char(176); f_c(1); cout << char(176);
	p(x + 6, y + 2); cout << char(176); f_c(7); cout << char(176) << char(176); b_c(7), f_c(10); cout << char(177);
	p(x, y + 3); b_c(1), f_c(3); cout << char(223) << char(223) << char(223) << char(223) << " "; b_c(1), f_c(10); cout << char(220); b_c(10), f_c(7); cout << char(176) << char(176) << char(176) << char(176);
	p(x + 2, y + 4); b_c(1), f_c(3); cout << char(220); f_c(10); cout << char(220); b_c(10), f_c(16); cout << char(178) << char(177); f_c(7); cout << char(176) << char(176); b_c(1), f_c(10); cout << char(223);
	p(x, y + 5); cout << char(220); b_c(10), f_c(3); cout << char(176) << char(176); b_c(10), f_c(16); cout << char(177) << " "; b_c(1), f_c(10); cout << char(223); f_c(3); cout << char(220) << char(220) << char(220) << char(220);
	p(x, y + 6); b_c(3), f_c(10); cout << char(177); b_c(10), f_c(3); cout << char(176) << char(176); f_c(1); cout << char(176);
	p(x + 6, y + 6); b_c(10), f_c(1); cout << char(178); f_c(3); cout << char(176) << char(176); b_c(3), f_c(10); cout << char(177);
	p(x, y + 7); cout << char(223) << char(177) << char(177); b_c(10), f_c(3); cout << char(176) << char(176) << char(176) << char(176); b_c(3), f_c(10); cout << char(177) << char(177) << char(223);
	p(x, y + 8); b_c(1), f_c(3); cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
}
void FONT59X_3_10(int x, int y) {
	p(x, y); b_c(1), f_c(7); cout << char(220); b_c(7), f_c(10); cout << char(176); f_c(15); cout << char(176) << char(177); b_c(15), f_c(7); cout << char(176); b_c(7), f_c(15); cout << char(177) << char(176); f_c(10); cout << char(176); b_c(1), f_c(7); cout << char(220);
	p(x, y + 1); b_c(7), f_c(10); cout << char(176) << char(177) << char(177); b_c(10), f_c(1); cout << char(176); b_c(7); cout << char(220) << char(220); b_c(10); cout << char(176); b_c(7), f_c(10); cout << char(177) << char(177) << char(176);
	p(x, y + 2); cout << char(177); b_c(10), f_c(7); cout << char(176) << char(176); f_c(1); cout << char(176);
	p(x + 6, y + 2); cout << char(176); f_c(7); cout << char(176) << char(176); b_c(7), f_c(10); cout << char(177);
	p(x, y + 3); b_c(1), f_c(10); cout << char(223); f_c(8); cout << char(223) << char(223); f_c(10); cout << char(223) << " "; b_c(16), f_c(10); cout << char(220) << char(178); b_c(10), f_c(7); cout << char(176) << char(176) << char(176);
	p(x, y + 4); b_c(1), f_c(10); cout << char(220); f_c(8); cout << char(220) << char(220); f_c(10); cout << char(220) << " "; f_c(8); cout << char(223); b_c(10), f_c(16); cout << char(176); f_c(7); cout << char(176) << char(176); f_c(10); cout << char(219);
	p(x, y + 5); b_c(3), f_c(10); cout << char(177); b_c(10), f_c(3); cout << char(176) << char(176); f_c(1); cout << char(176);
	p(x + 6, y + 5); b_c(10), f_c(1); cout << char(178); f_c(3); cout << char(176) << char(176); b_c(3), f_c(10); cout << char(177);
	p(x, y + 6); b_c(3), f_c(10); cout << char(177); b_c(10), f_c(3); cout << char(176) << char(176); f_c(1); cout << char(176);
	p(x + 6, y + 6); b_c(10), f_c(1); cout << char(178); f_c(3); cout << char(176) << char(176); b_c(3), f_c(10); cout << char(177);
	p(x, y + 7); cout << char(223) << char(177) << char(177); b_c(10), f_c(3); cout << char(176) << char(176) << char(176) << char(176); b_c(3), f_c(10); cout << char(177) << char(177) << char(223);
	p(x + 1, y + 8); b_c(1), f_c(3); cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
}
void FONT59X_POW_10(int x, int y) {
	p(x + 2, y); b_c(1), f_c(10); cout << char(220); b_c(10), f_c(7); cout << char(219) << char(178) << char(178) << char(178) << char(178) << char(178) << char(219); b_c(1), f_c(10); cout << char(220);
	p(x + 1, y + 1); cout << char(220); b_c(10), f_c(7); cout << char(178); b_c(7), f_c(10); cout << char(176) << char(176); b_c(1); cout << char(178); f_c(7); cout << char(223); f_c(10); cout << char(178); b_c(7); cout << char(176) << char(176); b_c(10), f_c(7); cout << char(178); b_c(1), f_c(10); cout << char(220);
	p(x, y + 2); f_c(8); cout << char(220); b_c(7), f_c(10); cout << char(176); b_c(7), f_c(10); cout << char(178) << char(178); b_c(1); cout << char(178); f_c(8); cout << char(223) << " " << char(223); f_c(10); cout << char(178); b_c(7); cout << char(178) << char(178); f_c(10); cout << char(176); b_c(1), f_c(8); cout << char(220);
}
//FONT INFO
//BROTHOOD.TDF (Brotherhood) - N° 116 - By: Roy/SAC
void BROTHOOD_a_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219) << char(220);
	p(x, y + 2); cout << char(219) << char(219) << char(223) << char(219) << char(219);
	p(x, y + 3); cout << char(223) << char(223) << " " << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_c_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219) << char(220);
	p(x, y + 2); cout << char(219) << char(219) << " " << char(220) << char(220);
	p(x + 1, y + 3); cout << char(223) << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_d_15(int x, int y) {
	p(x + 3, y); b_c(1), f_c(15); cout << char(219) << char(219);
	p(x, y + 1); cout << char(220) << char(219) << char(223) << char(219) << char(219);
	p(x, y + 2); cout << char(219) << char(219) << " " << char(219) << char(219);
	p(x + 1, y + 3); cout << char(223) << char(223) << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_e_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219) << char(220);
	p(x, y + 2); cout << char(219) << char(219) << char(223) << char(223);
	p(x + 1, y + 3); cout << char(223) << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_g_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219); b_c(7); cout << char(220);
	p(x, y + 2); b_c(1); cout << char(219) << char(219) << " " << char(219) << char(219);
	p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219);
	p(x + 2, y + 4); cout << char(223) << char(223);
}
void BROTHOOD_i_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(223) << char(223);
	p(x, y + 2); cout << char(219); b_c(7); cout << char(220);
	p(x, y + 3); b_c(1); cout << char(223) << char(223);
}
void BROTHOOD_j_15(int x, int y) {
	p(x + 1, y); b_c(7), f_c(15); cout << char(220) << char(219);
	p(x + 1, y + 1); cout << char(219) << char(219);
	p(x + 1, y + 2); cout << char(219) << char(219);
	p(x, y + 3); b_c(1); cout << char(223) << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_l_15(int x, int y) {
	p(x, y); b_c(1), f_c(15); cout << char(219); b_c(7); cout << char(220);
	p(x, y + 1); cout << char(219) << char(219);
	p(x, y + 2); cout << char(219) << char(219);
	p(x, y + 3); b_c(1), f_c(7); cout << char(223); f_c(15); cout << char(223) << char(223);
}
void BROTHOOD_n_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(219) << char(219) << char(223) << char(219) << char(220);
	p(x, y + 2); cout << char(219) << char(219) << " " << char(219) << char(219);
	p(x, y + 3); cout << char(223) << char(223) << " " << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_o_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223); b_c(7); cout << char(220); b_c(1); cout << char(220);
	p(x, y + 2); cout << char(219) << char(219) << " " << char(219) << char(219);
	p(x + 1, y + 3); cout << char(223) << char(223) << char(223);
}
void BROTHOOD_r_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219) << char(220);
	p(x, y + 2); cout << char(219) << char(219);
	p(x, y + 3); cout << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_s_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(223) << char(223);
	p(x + 1, y + 2); cout << char(223) << char(223) << char(219) << char(220);
	p(x, y + 3); cout << char(223) << char(223) << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_t_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(219) << char(220);
	p(x + 1, y + 2); cout << char(219) << char(219);
	p(x + 1, y + 3); cout << char(223); f_c(7); cout << char(223);
}
void BROTHOOD_u_15(int x, int y) {
	p(x, y + 1); b_c(1), f_c(15); cout << char(219) << char(219) << " "; b_c(7); cout << char(220); b_c(1); cout << char(220);
	p(x, y + 2); cout << char(219) << char(219) << " " << char(219) << char(219);
	p(x + 1, y + 3); cout << char(223) << char(223) << char(223);
}

void BROTHOOD_a_4(int x, int y) {
	p(x, y + 1); b_c(1), f_c(12); cout << char(220) << char(219) << char(223) << char(219) << char(220);
	p(x, y + 2); cout << char(219) << char(219) << char(223) << char(219) << char(219);
	p(x, y + 3); cout << char(223) << char(223) << " " << char(223); f_c(4); cout << char(223);
}
void BROTHOOD_i_4(int x, int y) {
	p(x, y + 1); b_c(1), f_c(12); cout << char(223) << char(223);
	p(x, y + 2); cout << char(219); b_c(4); cout << char(220);
	p(x, y + 3); b_c(1); cout << char(223) << char(223);
}
void BROTHOOD_l_4(int x, int y) {
	p(x, y); b_c(1), f_c(12); cout << char(219); b_c(4); cout << char(220);
	p(x, y + 1); cout << char(219) << char(219);
	p(x, y + 2); cout << char(219) << char(219);
	p(x, y + 3); b_c(1), f_c(4); cout << char(223); f_c(12); cout << char(223) << char(223);
}
void BROTHOOD_r_4(int x, int y) {
	p(x, y + 1); b_c(1), f_c(12); cout << char(220) << char(219) << char(223) << char(219) << char(220);
	p(x, y + 2); cout << char(219) << char(219);
	p(x, y + 3); cout << char(223); f_c(4); cout << char(223);
}
void BROTHOOD_s_4(int x, int y) {
	p(x, y + 1); b_c(1), f_c(12); cout << char(220) << char(219) << char(223) << char(223) << char(223);
	p(x + 1, y + 2); cout << char(223) << char(223) << char(219) << char(220);
	p(x, y + 3); cout << char(223) << char(223) << char(223); f_c(4); cout << char(223);
}
//BROKNSRT.TDF (Brokener Short) - N° 115 - By:	Dragoon Kain & Roy/SAC
void BROKNSRT_N(int x, int y) {
	p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
	p(x, y + 1); cout << char(219); f_c(14); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219); b_c(14), f_c(7); cout << char(223); b_c(1), f_c(7); cout << char(220);
	p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219); b_c(1); cout << char(223);
	p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x + 6, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 11); f_c(8); cout << char(219); b_c(9), f_c(7); cout << char(220) << char(220) << char(220) << char(219);
	p(x + 6, y + 11); f_c(8); cout << char(219); b_c(9), f_c(7); cout << char(220) << char(220) << char(220) << char(219);
}
void BROKNSRT_O(int x, int y) {
	p(x + 3, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
	p(x + 1, y + 1); cout << char(220); b_c(14), f_c(7); cout << char(223) << "   ";
	p(x + 6, y + 1); cout << "  " << char(223); b_c(1), f_c(7); cout << char(220);
	p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219); b_c(1); cout << char(223);
	p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x + 6, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219); b_c(1), f_c(8); cout << char(220);
	p(x + 6, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 1, y + 11); b_c(1); cout << char(223); b_c(9); cout << char(220) << char(220) << char(220) << char(220);
	p(x + 6, y + 11); cout << char(220) << char(220) << char(220); b_c(1); cout << char(223);
}
void BROKNSRT_U(int x, int y) {
	p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
	p(x + 6, y); cout << char(220) << char(220);
	p(x, y + 1); cout << char(219); b_c(14), f_c(7); cout << "   " << char(219);
	p(x + 6, y + 1); f_c(8); cout << char(219); f_c(14); cout << char(219); b_c(14), f_c(7); cout << char(223); b_c(1), f_c(8); cout << char(220);
	p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x + 6, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219); b_c(1), f_c(8); cout << char(220);
	p(x + 6, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 1, y + 11); b_c(1); cout << char(223); b_c(9); cout << char(220) << char(220) << char(220) << char(220);
	p(x + 6, y + 11); cout << char(220) << char(220) << char(220); b_c(1); cout << char(223);
}
void BROKNSRT_W(int x, int y) {
	p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
	p(x + 11, y); cout << char(220) << char(220);
	p(x, y + 1); cout << char(219); b_c(14), f_c(7); cout << "   " << char(219);
	p(x + 11, y + 1); f_c(8); cout << char(219); f_c(14); cout << char(219); b_c(14), f_c(7); cout << char(223); b_c(1), f_c(8); cout << char(220);
	p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(7); cout << char(223); b_c(1); cout << char(220);
	p(x + 11, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 11, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 11, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 11, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 11, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 11, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 8); b_c(8), f_c(7); cout << char(176); f_c(2); cout << char(219) << char(219) << char(219); b_c(7), f_c(8); cout << char(176);
	p(x + 6, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219); b_c(7), f_c(8); cout << char(176);
	p(x + 11, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x, y + 9); b_c(8), f_c(7); cout << char(177); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(8), f_c(7); cout << char(177);
	p(x + 6, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176); b_c(8), f_c(7); cout << char(177);
	p(x + 11, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 10); b_c(7), f_c(8); cout << char(176); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); b_c(8), f_c(7); cout << char(176); b_c(1), f_c(8); cout << char(220);
	p(x + 6, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177); b_c(8), f_c(7); cout << char(176); b_c(1), f_c(8); cout << char(220);
	p(x + 11, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 1, y + 11); b_c(1); cout << char(223); b_c(9); cout << char(220) << char(220) << char(220) << char(220);
	p(x + 6, y + 11); cout << char(220) << char(220) << char(220) << char(220) << char(220);
	p(x + 11, y + 11); cout << char(220) << char(220) << char(220); b_c(1); cout << char(223);
}
void BROKNSRT_Y(int x, int y) {
	p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
	p(x + 6, y); cout << char(220) << char(220) << char(220) << char(220) << char(220);
	p(x, y + 1); cout << char(219); b_c(14), f_c(7); cout << "   " << char(219);
	p(x + 6, y + 1); f_c(8); cout << char(219); f_c(14), f_c(7); cout << "   " << char(219);
	p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); b_c(7), f_c(8); cout << char(176);
	p(x + 6, y + 4); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 5); b_c(8), f_c(7); cout << char(176); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); b_c(8), f_c(7); cout << char(177);
	p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 6); b_c(8), f_c(7); cout << char(177); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); b_c(8), f_c(7); cout << char(176);
	p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 7);  b_c(7), f_c(8); cout << char(176); b_c(1), f_c(6); cout << char(177) << char(177) << char(177) << char(177) << char(177);
	p(x + 6, y + 7); cout << char(177) << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 1, y + 8); b_c(1); cout << char(223) << char(223) << char(223) << char(223) << char(223);
	p(x + 6, y + 8); b_c(8), f_c(7); cout << char(177); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x, y + 9); b_c(8); cout << char(176); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x + 6, y + 9); b_c(8); cout << char(176); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219); b_c(1), f_c(8); cout << char(220);
	p(x + 6, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x + 1, y + 11); b_c(1); cout << char(223); b_c(9); cout << char(220) << char(220) << char(220) << char(220);
	p(x + 6, y + 11); cout << char(220) << char(220) << char(220); b_c(1); cout << char(223);
}
void BROKNSRT_I(int x, int y) {
	p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
	p(x, y + 1); cout << char(219); f_c(14); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
	p(x, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
	p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
	p(x, y + 11); f_c(8); cout << char(219); b_c(9), f_c(7); cout << char(220) << char(220) << char(220) << char(219);
}


void ICON_RIGHTKEY(int x, int y) {
	p(x, y); b_c(1), f_c(15); cout << char(220); b_c(7); cout << char(223) << char(223); b_c(1), f_c(7); cout << char(219) << char(223) << char(219) << char(219); b_c(7), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220);
	p(x, y + 1); b_c(15), f_c(7); cout << char(176) << char(219); b_c(1); cout << char(223) << " " << char(223) << char(223) << char(223) << char(219); b_c(7), f_c(8); cout << char(178);
	p(x, y + 2); b_c(7), f_c(15); cout << char(178); b_c(1), f_c(7); cout << char(219) << char(219) << char(220) << char(223) << char(219) << char(219) << char(219); b_c(8), f_c(7); cout << char(176);
	p(x, y + 3); b_c(1), f_c(7); cout << char(223); b_c(8); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223); b_c(1), f_c(8); cout << char(223);
}
void ICON_LEFTKEY(int x, int y) {
	p(x, y); b_c(1), f_c(15); cout << char(220); b_c(7); cout << char(223) << char(223); b_c(1), f_c(7); cout << char(219) << char(223) << char(219) << char(219); b_c(7), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220);
	p(x, y + 1); b_c(15), f_c(7); cout << char(176) << char(219); b_c(1); cout << char(223) << char(223) << char(223) << " " << char(223) << char(219); b_c(7), f_c(8); cout << char(178);
	p(x, y + 2); b_c(7), f_c(15); cout << char(178); b_c(1), f_c(7); cout << char(219) << char(219) << char(219) << char(223) << char(220) << char(219) << char(219); b_c(8), f_c(7); cout << char(176);
	p(x, y + 3); b_c(1), f_c(7); cout << char(223); b_c(8); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223); b_c(1), f_c(8); cout << char(223);
}
void ICON_UPKEY(int x, int y) {
	p(x, y); b_c(1), f_c(15); cout << char(220); b_c(7); cout << char(223) << char(223); b_c(1), f_c(7); cout << char(219) << char(223) << char(219) << char(219); b_c(7), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220);
	p(x, y + 1); b_c(15), f_c(7); cout << char(176) << char(219); b_c(1); cout << char(223) << char(220) << " " << char(220) << char(223) << char(219); b_c(7), f_c(8); cout << char(178);
	p(x, y + 2); b_c(7), f_c(15); cout << char(178); b_c(1), f_c(7); cout << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219); b_c(8), f_c(7); cout << char(176);
	p(x, y + 3); b_c(1), f_c(7); cout << char(223); b_c(8); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223); b_c(1), f_c(8); cout << char(223);
}
void ICON_DOWNKEY(int x, int y) {
	p(x, y); b_c(1), f_c(15); cout << char(220); b_c(7); cout << char(223) << char(223); b_c(1), f_c(7); cout << char(219) << char(223) << char(219) << char(219); b_c(7), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220);
	p(x, y + 1); b_c(15), f_c(7); cout << char(176) << char(219); b_c(1); cout << char(223) << char(219) << " " << char(219) << char(223) << char(219); b_c(7), f_c(8); cout << char(178);
	p(x, y + 2); b_c(7), f_c(15); cout << char(178); b_c(1), f_c(7); cout << char(219) << char(219) << char(220) << " " << char(220) << char(219) << char(219); b_c(8), f_c(7); cout << char(176);
	p(x, y + 3); b_c(1), f_c(7); cout << char(223); b_c(8); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223); b_c(1), f_c(8); cout << char(223);
}
void ICON_DIRECTIONALKEYS(int x, int y) {
	ICON_RIGHTKEY(x, y + 5);
	ICON_LEFTKEY(x + 20, y + 5);
	ICON_UPKEY(x + 10, y);
	ICON_DOWNKEY(x + 10, y + 5);
}

void TITULO_JUGAR_116(int x, int y) {
	BROTHOOD_j_15(x, y);
	BROTHOOD_u_15(x + 4, y);
	BROTHOOD_g_15(x + 10, y);
	BROTHOOD_a_15(x + 16, y);
	BROTHOOD_r_15(x + 22, y);
}
void TITULO_INSTRUCCIONES_116(int x, int y) {
	BROTHOOD_i_15(x, y);
	BROTHOOD_n_15(x + 3, y);
	BROTHOOD_s_15(x + 9, y);
	BROTHOOD_t_15(x + 15, y);
	BROTHOOD_r_15(x + 20, y);
	BROTHOOD_u_15(x + 26, y);
	BROTHOOD_c_15(x + 32, y);
	BROTHOOD_c_15(x + 38, y);
	BROTHOOD_i_15(x + 44, y);
	BROTHOOD_o_15(x + 47, y);
	BROTHOOD_n_15(x + 53, y);
	BROTHOOD_e_15(x + 59, y);
	BROTHOOD_s_15(x + 65, y);
}
void TITULO_CREDITOS_116(int x, int y) {
	BROTHOOD_c_15(x, y);
	BROTHOOD_r_15(x + 6, y);
	BROTHOOD_e_15(x + 12, y);
	BROTHOOD_d_15(x + 18, y);
	BROTHOOD_i_15(x + 24, y);
	BROTHOOD_t_15(x + 27, y);
	BROTHOOD_o_15(x + 32, y);
	BROTHOOD_s_15(x + 38, y);
}
void TITULO_SALIR_116(int x, int y) {
	BROTHOOD_s_15(x, y);
	BROTHOOD_a_15(x + 6, y);
	BROTHOOD_l_15(x + 12, y);
	BROTHOOD_i_15(x + 16, y);
	BROTHOOD_r_15(x + 19, y);
}
void TITULO_SALIR_116_2(int x, int y) {
	BROTHOOD_s_4(x, y);
	BROTHOOD_a_4(x + 6, y);
	BROTHOOD_l_4(x + 12, y);
	BROTHOOD_i_4(x + 16, y);
	BROTHOOD_r_4(x + 19, y);
}
void TITULO_MENU_116_v1(int x, int y) {
	TITULO_JUGAR_116(x, y);
	TITULO_INSTRUCCIONES_116(x, y + 4);
	TITULO_CREDITOS_116(x + 27, y + 8);
	TITULO_SALIR_116(x + 46, y + 12);
}
void TITULO_MENU_116_v2(int x, int y) {
	TITULO_JUGAR_116(x, y);
	TITULO_INSTRUCCIONES_116(x, y + 4);
	TITULO_CREDITOS_116(x + 27, y + 8);
	TITULO_SALIR_116_2(x + 46, y + 12);
}


void TEXT_CONTOLS(int x, int y) {
	p(x + 2, y); b_c(1), f_c(15); cout << "El movimiento del jugador usa";
	p(x, y + 1); cout << "las teclas direccionales o flechas de direccion.";
}
void TEXT_INTEGRANTE1_L(int x, int y) {
	p(x, y); b_c(1), f_c(15); cout << "Lieserl Ayala"; // Se nececita colocar el nombre completo
}
void TEXT_INTEGRANTE2_L(int x, int y) {
	p(x, y); b_c(1), f_c(15); cout << "Peña Guerra, Alberto"; // Se nececita colocar el nombre completo
}
void TEXT_INTEGRANTE3_L(int x, int y) {
	p(x, y); b_c(1), f_c(15); cout << "Peña Guerra, Carlos"; // Se nececita colocar el nombre completo
}
void TEXT_CREDITOS_v3(int x, int y) {
	TEXT_INTEGRANTE1_L(x, y);
	TEXT_INTEGRANTE2_L(x + 2, y + 2);
	TEXT_INTEGRANTE3_L(x + 4, y + 4);
}
void TITULO_YOUWON_v2(int x, int y) {
	BROKNSRT_Y(x, y);
	BROKNSRT_O(x + 12, y);
	BROKNSRT_U(x + 24, y);
	BROKNSRT_W(x + 38, y);
	BROKNSRT_O(x + 55, y);
	BROKNSRT_N(x + 67, y);
}
void TITULO_GANAR_v2() {
	TITULO_YOUWON_v2(1, 12);
	p(36, 33); b_c(1), f_c(15); cout << "Presiona la tecla 'Esc' y luego vuelve a  presionar cualquier tecla para salir";
	system("pause>0");
	while (true) {
		if (kbhit()) {
			char tecla = getch();
			if (tecla == '\033'); //Presiona la tecla "Esc" para salir
			system("cls");
			break;
		}
	}
}

void INSTRUCCIONES() {
	TITULO_INSTRUCCIONES_116(25, 2);
	ICON_DIRECTIONALKEYS(12, 9);
	p(36, 33); b_c(1), f_c(15); cout << "Presione cualquier tecla para continuar al juego";
	system("pause>0");
	system("cls");
	//fncIniciar();
}
void INSTRUCCIONES_ALT() {
	TITULO_INSTRUCCIONES_116(25, 2);
	ICON_DIRECTIONALKEYS(12, 9);
	p(36, 33); b_c(1), f_c(15); cout << "Presione cualquier tecla para regresar al menu";
	system("pause>0");
	system("cls");
	//MENU();
}
void CREDITOS() {
	TITULO_CREDITOS_116(39, 2);
	TEXT_CREDITOS_v3(44, 10);
	p(36, 33); b_c(1), f_c(15); cout << "Presione cualquier tecla para regresar al menu";
	system("pause>0");
	system("cls");
	//MENU();
}
void LOGO_EQUIPO() {
	FONT59X_3_10(44, 13);
	FONT59X_POW_10(55, 11);
	FONT59X_2_10(69, 13);
	b_c(1), f_c(15);
	system("pause>0");
	system("cls");
	//MENU();
}

int MENU() {
	int opc_menu;
	TITULO_MENU_116_v1(25, 19);
	cin >> opc_menu;
	return opc_menu;
}

class mtrx : protected Jugador {
private:
public:
	mtrx() {}; void mtrxFondo1() {
		int fondo_juego[FILAS][COLUMNAS] = {
				{16,16,18,16,16,16,16,16,16,16,16,16,16,16,18,16,16,16,16,16,16,16,16,16,16,16,18,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,18,16,16,16,16,16,16,16,16,16,16,16,18,16,16,16,16,16,16,16,16,16,16,16,18,16,16},
				{16,10,10,10,18,16,16,16,16,16,16,16,16,10,10,10,18,16,16,16,16,16,16,16,16,10,10,10,18,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,18,10,10,10,16,16,16,16,16,16,16,16,18,10,10,10,16,16,16,16,16,16,16,16,18,10,10,10,16},
				{10,10,19,20,20,20,18,16,16,16,16,16,10,10,19,20,20,20,18,16,16,16,16,16,10,10,19,20,20,20,18,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,18,20,20,20,19,10,10,16,16,16,16,16,18,20,20,20,19,10,10,16,16,16,16,16,18,20,20,20,19,10,10},
				{18,21,0,0,0,3,0,16,16,16,16,16,18,21,0,0,0,3,0,16,16,16,16,16,18,21,0,0,0,3,0,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,0,3,1,1,0,21,18,16,16,16,16,16,0,3,1,1,0,21,18,16,16,16,16,16,0,3,1,1,0,21,18},
				{24,10,0,0,10,3,16,10,18,0,16,18,24,10,0,0,10,3,16,10,18,0,16,18,24,10,0,0,10,3,16,10,18,0,16,16,3,0,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,0,3,16,16,0,18,10,16,3,10,0,0,10,24,18,16,0,0,10,16,3,10,0,0,10,24,18,16,0,18,10,16,3,10,0,0,10,24},
				{19,20,0,0,0,21,1,0,0,20,20,0,19,20,0,0,21,1,0,0,0,20,20,0,19,20,0,0,21,1,0,0,0,0,0,0,20,19,0,0,0,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,0,0,0,19,20,0,0,0,0,0,0,1,21,0,0,20,19,0,20,20,0,0,0,1,21,0,0,20,19,0,20,20,0,0,0,1,21,0,0,20,19},
				{1,1,1,20,3,20,10,21,1,3,0,1,1,1,1,20,3,20,10,21,1,3,21,1,1,1,1,20,3,20,10,21,1,3,21,1,0,1,10,1,3,3,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,3,3,1,10,1,0,1,0,3,1,21,10,20,3,20,1,1,1,1,0,0,1,21,10,20,3,20,1,1,1,1,0,0,1,21,10,20,3,20,1,1,1},
				{3,3,0,3,20,20,1,3,19,21,1,1,3,3,0,3,20,20,1,3,19,21,1,1,3,3,0,3,20,20,1,3,19,21,1,1,21,3,0,22,22,23,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,23,22,22,0,3,0,1,1,24,19,3,1,20,20,3,0,3,3,1,1,21,19,3,24,20,20,3,0,3,3,1,1,21,19,3,24,20,20,3,0,3,3},
				{3,3,6,3,3,21,6,4,4,3,3,3,3,1,6,3,3,21,6,4,4,3,3,3,3,21,0,3,3,21,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,21,3,3,0,21,3,3,3,3,4,4,6,21,3,3,6,1,3,3,3,3,4,4,6,21,3,3,6,3,3},
				{3,3,3,3,3,3,3,3,3,3,3,3,3,20,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,20,20,3,3,3,3,3,3,3,3,3,3,3,3,3},
				{3,3,3,3,3,3,3,3,3,3,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,20,3,3,3,3,3,3,3,3,3,3},
				{3,3,3,3,3,3,3,3,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,3,3,3,3,3,3,3,3},
				{3,3,3,3,3,3,3,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,3,3,3,3,3,3,3},
				{3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3},
				{10,10,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,10,10,10},
				{19,19,19,19,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,19,19,19,19},
				{24,24,24,24,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,0,0,24,0},
				{10,10,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,19,10,10,0,10},
				{10,10,10,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,0,10,10,10,10},
				{19,10,10,10,10,10,19,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,3,10,10,10,10,24},
				{10,10,24,10,10,10,24,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,24,3,20,0,10,24,0},
				{10,10,3,19,24,19,3,0,0,10,0,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,21,0,3,0,0,3,21,0,3,3,0},
				{0,0,0,10,0,19,3,0,0,0,3,19,0,0,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,20,3,10,0,0,24,0,3,10,0,3,3},
				{3,3,19,0,0,0,3,3,10,0,3,0,3,3,19,0,21,0,3,3,10,20,3,0,3,3,10,0,21,0,3,3,10,20,3,0,3,3,0,0,21,0,3,3,10,20,3,21,3,3,0,0,21,0,3,3,10,20,3,21,3,3,19,0,0,0,0,0,21,24,24,0,20,0,0,3,0,3,0,0,0,24,24,3,0,3,0,0,0,0,0,0,20,24,24,0,21,20,0,3,0,3,0,0,0,24,24,3,0,3,0,0,24,0,21,20,0,3,0,3},
				{19,24,21,0,10,19,0,0,0,21,19,19,19,24,21,0,10,19,0,3,0,21,19,3,0,19,21,0,10,3,0,3,0,21,19,19,19,0,21,0,10,0,20,21,0,21,19,19,19,0,21,0,10,0,20,21,0,21,19,19,19,24,0,0,6,6,6,6,6,0,6,6,0,0,4,0,0,4,6,6,0,0,6,0,0,0,6,6,6,6,6,6,6,0,6,6,0,0,4,0,0,4,6,6,0,0,6,0,0,0,6,6,6,6,0,0,4,0,0,0}
		};
		for (int f = 0; f < FILAS; f++)
		{
			for (int c = 0; c < COLUMNAS; c++)
			{
				p(c, f);
				// 1 Solo color
				if (fondo_juego[f][c] == 1) {
					f_c(1);
					cout << char(219);
				}
				if (fondo_juego[f][c] == 3) {
					f_c(3);
					cout << char(219);
				}
				if (fondo_juego[f][c] == 4) {
					f_c(4);
					cout << char(219);
				}
				if (fondo_juego[f][c] == 6) {
					f_c(6);
					cout << char(219);
				}
				if (fondo_juego[f][c] == 10) {
					f_c(10);
					cout << char(219);
				}
				if (fondo_juego[f][c] == 16) {
					f_c(16);
					cout << char(219);
				}
				// 2 Colores - Bloque ASCII
				if (fondo_juego[f][c] == 18) {
					b_c(16), f_c(10);
					cout << char(220);
				}
				if (fondo_juego[f][c] == 19) {
					b_c(3), f_c(10);
					cout << char(220);
				}
				if (fondo_juego[f][c] == 20) {
					b_c(3), f_c(1);
					cout << char(220);
				}
				if (fondo_juego[f][c] == 21) {
					b_c(3), f_c(1);
					cout << char(223);
				}
				if (fondo_juego[f][c] == 22) {
					b_c(10), f_c(16);
					cout << char(220);
				}
				if (fondo_juego[f][c] == 23) {
					b_c(1), f_c(16);
					cout << char(220);
				}
				if (fondo_juego[f][c] == 24) {
					b_c(10), f_c(3);
					cout << char(220);
				}
				b_c(1), f_c(15);
			}
		}
		while (1) {
			if (_kbhit()) {
				char tecla = getch();
				borrarJ(xJ, yJ);
				if (tecla == DERECHA && (fondo_juego[yJ][xJ + 6] == 0 && fondo_juego[yJ + 1][xJ + 6] == 0 && fondo_juego[yJ + 2][xJ + 7] == 0 && fondo_juego[yJ + 3][xJ + 5] == 0)) xJ++;
				if (tecla == IZQUIERDA && (fondo_juego[yJ][xJ] == 0 && fondo_juego[yJ + 1][xJ] == 0 && fondo_juego[yJ + 2][xJ - 1] == 0 && fondo_juego[yJ + 3][xJ + 1] == 0)) xJ--;
				if (tecla == ARRIBA && (fondo_juego[yJ][xJ] == 0 && fondo_juego[yJ + 1][xJ] == 0 && fondo_juego[yJ - 1][xJ + 1] == 0 && fondo_juego[yJ - 1][xJ + 2] == 0 && fondo_juego[yJ - 1][xJ + 3] == 0 && fondo_juego[yJ][xJ + 4] == 0 && fondo_juego[yJ][xJ + 5] == 0 && fondo_juego[yJ + 1][xJ + 6] == 0)) yJ--;
				if (tecla == ABAJO && (fondo_juego[yJ + 3][xJ] == 0 && fondo_juego[yJ + 3][xJ + 1] == 0 && fondo_juego[yJ + 4][xJ + 2] == 0 && fondo_juego[yJ + 4][xJ + 3] == 0 && fondo_juego[yJ + 4][xJ + 4] == 0 && fondo_juego[yJ + 3][xJ + 5] == 0 && fondo_juego[yJ + 3][xJ + 6] == 0)) yJ++;
			}
			dibujarJ(xJ, yJ);
		}
	}
	~mtrx() {};
};