#include "lagu.h"
#include <iomanip>
#include <sstream>

Lagu::Lagu(std::string judul, std::string penyanyi, std::string album, int durasi_menit, int durasi_detik) {
	this->judul = judul;
	this->penyanyi = penyanyi;
	this->album = album;

	// Format durasi MM:SS
	std::ostringstream ss;
	ss << std::setw(2) << std::setfill('0') << durasi_menit << ":"
	   << std::setw(2) << std::setfill('0') << durasi_detik;
	this->durasi = ss.str();
}

void Lagu::play() {
	std::cout << "Sedang memutar lagu: " << this->judul << " (" << this->album << ")" << "\n"
	          << "oleh: " << this->penyanyi << "\n"
	          << "Durasi: " << this->durasi << "\n";
}
