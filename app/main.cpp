#include <iostream>
#include "money.h"

using vsite::oop::v6::money;

int main() {
	money total(0);
	char c; money m;
	while (std::cin >> c >> m) {
		if (c == '-')
			total -= m;
		else
			total += m;
	}
	std::cout << total << '\n';
}
