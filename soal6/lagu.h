#ifndef LAGU_H
#define LAGU_H

#include <string>
#include <iostream>

class Lagu {
private:
	std::string judul;
	std::string penyanyi;
	std::string album;
	std::string durasi;

public:
	Lagu(std::string judul, std::string penyanyi, std::string album, int durasi_menit, int durasi_detik);
	void play();
};

#endif // LAGU_H
