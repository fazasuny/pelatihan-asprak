#ifndef ANTRIAN_H
#define ANTRIAN_H

#include "lagu.h"
#include <vector>

class Antrian {
private:
	std::vector<Lagu> antrian_lagu;
	int indeks_lagu_sekarang = 0; // Awalnya lagu pertama

public:
	void tambahLagu(Lagu lagu_baru);
	void next();
	void prev();
	void play();
};

#endif // ANTRIAN_H
