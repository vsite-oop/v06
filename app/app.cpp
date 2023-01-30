#include "app.h"
#include <algorithm>
#include <type_traits>
#include <sstream>

namespace vsite::oop::v6
{
	bool is_flush(const std::string card[], int x) {
		for (int i = 1; i < x; ++i) {
			if (card[i][0] != card[0][0])
				return false;
		}
		return true;
	}


	void rectangle::print(std::ostream& ss) const {
		ss << "(" + std::to_string(x1) + "," + std::to_string(y1) + ") - (" + std::to_string(x2) + "," + std::to_string(y2) + ")";
	}


	rectangle& rectangle::move(int dx, int dy) {
		x1 += dx; x2 += dx;
		y1 += dy; y2 += dy;
		return *this;


	}
	void polygon::add(const point& pt) {
		p[n++] = pt;
	}


	double  polygon::distance(const point& a, const point& b) {
		int dx = b.x - a.x, dy = b.y - a.y;
		return sqrt(dx * dx + dy * dy);
	}

	double polygon::perimeter() {
		double d = distance(p[n - 1], p[0]);
		for (int i = 0; i < n - 1; ++i)
			d += distance(p[i], p[i + 1]);
		return d;
	}
}