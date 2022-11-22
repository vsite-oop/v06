#include "app.h"
#include <iostream>
using namespace vsite::oop::v6;

int main()
{
	uint32_t n;
	std::cout << "Unesi broj tocaka poligona: ";
	std::cin >> n;
	polygon a(n);
	for (int i = 0; i < n; ++i) {
		int x, y;
		std::cout << "Unesi x koordinatu " << i + 1 << ". tocke: ";
		std::cin >> x;
		std::cout << "Unesi y koordinatu " << i + 1 << ". tocke: ";
		std::cin >> y;
		a.add({ x,y });
	}
	std::cout << "Opseg poligona je: " << a.perimeter();
}
