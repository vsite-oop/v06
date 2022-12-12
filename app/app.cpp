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

	polygon::polygon(int n) : p(new point[n]), n(0) {};
	polygon::polygon(const polygon& p2) : p(new point[p2.n]), n(p2.n) {
		for (auto i = 0; i < n; ++i) {
			p[i] = p2.p[i];
		}
	}

	polygon::~polygon() {
		delete[] p;
	}

	void polygon::add(const point& add_p) {
		p[n++] = add_p;
	}

	double distance(const point& t1, const point& t2) {
		int tx = t2.x - t1.x;
		int ty = t2.y - t1.y;

		double d = sqrt((tx * tx) + (ty * ty));
		return d;
	}
	double polygon::perimeter() {
		double perimeter = 0;
		perimeter = distance(p[n - 1], p[0]);
		for (auto i = 0; i < n - 1; ++i) {
			perimeter += distance(p[i], p[i + 1]);
		}

		return perimeter;
	}
}