#include "link.h"

int main() {
	setlocale(LC_ALL, "RU");

	struct data data;
	
	input<short int>(data.s_i);

	input<unsigned short int>(data.us_i);

	input<int>(data.i);

	input<unsigned int>(data.ul);

	input<float>(data.fl);

	input<double>(data.db);
}