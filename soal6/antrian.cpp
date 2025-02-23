#include "antrian.h"

void Antrian::play() {
	if (antrian_lagu.empty()) {
		std::cout << "Antrian kosong, tidak ada lagu yang dapat diputar.\n";
		return;
	}
	antrian_lagu[indeks_lagu_sekarang].play();
}

void Antrian::tambahLagu(Lagu lagu_baru) {
	antrian_lagu.push_back(lagu_baru);
}

void Antrian::next() {
	if (antrian_lagu.empty()) {
		std::cout << "Antrian kosong, tidak bisa next.\n";
		return;
	}
	indeks_lagu_sekarang = (indeks_lagu_sekarang + 1) % antrian_lagu.size();
	play();
}

void Antrian::prev() {
	if (antrian_lagu.empty()) {
		std::cout << "Antrian kosong, tidak bisa prev.\n";
		return;
	}
	indeks_lagu_sekarang = (indeks_lagu_sekarang - 1 + antrian_lagu.size()) % antrian_lagu.size();
	play();
}
