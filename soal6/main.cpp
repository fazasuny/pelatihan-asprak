#include "antrian.h"

int main() {
	Lagu lagu1("Don't Stop Me Now", "Queen", "Jazz", 3, 39);
	Lagu lagu2("Virtual Insanity", "Jamiroquai", "Travelling Without Moving", 5, 41);
	
	Antrian antrian;
	antrian.tambahLagu(lagu1);
	antrian.tambahLagu(lagu2);

	antrian.play();
	antrian.next();
	antrian.prev();

	return 0;
}
