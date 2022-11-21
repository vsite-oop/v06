#include "app.h"
#include <algorithm>
#include <sstream>

namespace vsite::oop::v6
{
	bool is_flush(const std::string* s, int i) {
		char c = s[0][0];
		for (auto n = 1; n < i; ++n) {
			if (c != s[n][0])
				return false;
		}
		return true;
	}

	std::string numpy::name() const {
		return "NumPy";
	}
	std::string numpy::version() const {
		return "1.23.5";
	}
	int numpy::year() const {
		return 2022;
	}

	rectangle::rectangle(int x1, int y1, int x2, int y2) :x1(x1), y1(y1), x2(x2), y2(y2) { }

	void rectangle::print(std::stringstream& ss) {
		ss << '(' << rectangle::x1 << ',' << rectangle::y1 << ')' << " - " << '(' << rectangle::x2 << ',' << rectangle::y2 << ')';
	}

	rectangle& rectangle::move(int k1, int k2) {
		x1 += k1;
		y1 += k2;
		x2 += k1;
		y2 += k2;

		return *this;
	}
}