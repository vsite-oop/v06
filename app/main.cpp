#include "app.h"
#include <iostream>

int main()
{
	polygon p1(4);
	p1.add({ 0,  0 });
	p1.add({ 10,  0 });
	p1.add({ 10, 10 });
	p1.add({ 0, 10 });

	std::cout << p1.perimeter();
}
