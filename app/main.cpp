#include "app.h"
#include <iostream>  // cout, cin
#include <format>  // format

/*U programu unesite broj toèaka poligona i sve toèke poligona te
ispišite opseg poligona.*/

using namespace vsite::oop::v6;  // I added this.

int main()
{
	std::cout << "Insert number of vertices:\n";
	int points;
	std::cin >> points;  // No. of points in a polygon.

	polygon polygon_1(points);

	for (int i = 0; i < points; i++) {
		std::cout << std::format("Insert {}. vertex (x y):\n", i+1);
		point input_point;
		std::cin >> input_point.x >> input_point.y;
		polygon_1.add(input_point);
	}

	std::cout << std::format("Perimeter of a given polygon is:\n{}\n", polygon_1.perimeter());
}
