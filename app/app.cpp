#include "app.h"
#include <algorithm>
#include <format>
#include <sstream>
#include <iostream>


namespace vsite::oop::v6
{
	bool is_flush(const std::string cards[], unsigned num_of_cards) {
		int same_suit = 0;
		char suit = cards[0][0];

		for (unsigned i = 1; i < num_of_cards; ++i) {
			if (cards[i][0] == suit && num_of_cards >= 5) {
				continue;
			}
			else {
				return false;
			}
		}
		return true;
	}
}

/*-------------------test 2----------------------------*/


std::string numpy::name() const { return "NumPy"; }
std::string numpy::version() const { return "1.23.5"; }
int numpy::year() const { return 2022; }



/*--------------------------test 3-----------------------------*/

rectangle::rectangle(int x1, int y1, int x2, int y2) { _x1 = x1, _y1 = y1, _x2 = x2, _y2 = y2; }
rectangle::~rectangle() {};
void rectangle::print(std::ostream& input) const {
	input << std::format("({},{}) - ({},{})", _x1, _y1, _x2, _y2);
};

rectangle& rectangle::move(int x, int y) {
	_x1 += x;
	_x2 += x;
	_y1 += y;
	_y2 += y;

	return *this;
}


/*--------------------------test 4-----------------------------*/
polygon::polygon(int s) { 
	sides = s; 
	p = new point[sides];
}

polygon::polygon(const polygon& poly) {
	sides = poly.sides;
	position = poly.position;
	p = new point[poly.sides];
	for (int i = 0; i < position; ++i) {
		p[i] = poly.p[i];
	}
}

polygon::~polygon(){
	delete[] p;
	p = nullptr;
}

void polygon::add(point pp) {
	p[position] = pp;
	position++;
}

double polygon::perimeter() {
	double perimeter_sum = 0;
	int i = 0;
	while (i < sides - 1) {
		point& a = p[i];
		point& b = p[i+1];
		perimeter_sum += std::sqrt((std::pow((b.x - a.x), 2)) + (std::pow((b.y - a.y), 2)));
		++i;
	}
	point& a = p[i];
	point& b = p[0];
	perimeter_sum += std::sqrt((std::pow((b.x - a.x), 2)) + (std::pow((b.y - a.y), 2)));

	return perimeter_sum;
}



