#include "app.h"
#include <iostream>

int main()
{
 // broj pointova poligona
	unsigned int np = 0;
	std::cin >> np;

	vsite::oop::v6::polygon polygon(np);

	while (np) {
		vsite::oop::v6::point pp;
		// ucitavanje tocaka x i y s standarnog inputa odvojenih razmakom
		std::cin >> pp.x >> pp.y;

		polygon.add(pp);

		--np;
	}

	std::cout << polygon.perimeter();
}
