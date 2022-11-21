#include "app.h"
#include <algorithm>
#include <format>
#include <sstream>


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
	}
}

/*-------------------test 2----------------------------*/

py::package::~package(){};

std::string numpy::name() const { return "NumPy"; }
std::string numpy::version() const { return "1.23.5"; }
int numpy::year() const { return 2022; }



/*--------------------------test 4-----------------------------*/

rectangle::rectangle(int x1, int y1, int x2, int y2) { _x1 = x1, _y1 = y1, _x2 = x2, _y2 = y2; }
rectangle::~rectangle() {};
std::string rectangle::print() const {

};

