#include "app.h"
#include <algorithm>
#include <ostream>
#include <numbers>

namespace vsite::oop::v6
{
	bool is_flush(const std::string* arr, int x) {
		char color = arr[0][0];
		for (int i = 1; i < x; ++i) {
			if (arr[i][0] != color) return false;
		}
		return true;
	}

	std::string numpy::name() const {
		return "NumPy";
	};
	std::string numpy::version() const {
		return "1.23.5";
	}
	int numpy::year() const {
		return 2022;
	}

	rectangle::rectangle(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {

	}
	void rectangle::print(std::ostream& ss) const {
		ss << "(" << x1 << "," << y1 << ") - (" << x2 << "," << y2 << ")";

	}

	rectangle& rectangle::move(int x, int y) {
		this->x1 += x;
		this->x2 += x;
		this->y1 += y;
		this->y2 += y;
		return *this;
	}
	

	polygon::polygon(int size) {
		arr = new point[size];
	}
	
	polygon::polygon(const polygon& other) : arr(new point[other.pos]), pos(other.pos) {
		for (int i = 0; i < pos; ++i) {
			arr[i] = other.arr[i];
		}
	}

	polygon::~polygon() { 
		delete[] arr;
		arr = nullptr;
	}

	void polygon::add(point p) {
		arr[pos++] = p;
	}

	double distance(point a, point b) {
		return std::hypot(b.x - a.x, b.y - a.y);
	}

	double polygon::perimeter() const {
		double _perimeter = 0;
		int i = 0;
		while (i < pos-1) {
			_perimeter += distance(arr[i], arr[i + 1]);
			i++;
		}
		_perimeter += distance(arr[i], arr[0]);
		return _perimeter;

	}
};