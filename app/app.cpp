#include "app.h"
#include <algorithm>
#include <ostream> // ostream
#include <format>  // format

namespace vsite::oop::v6
{
	bool is_flush(const std::string* arr, int n) {
		const std::string* prvi = arr;
		for (int i = 0; i < n; i++) {
			if (arr[i][0] == prvi[0][0]) {
				continue;
			}
			else
				return false;
		}
		return true;
	}


	/*===Class numpy===*/
	std::string numpy::name() const {
		return "NumPy";
	}

	std::string numpy::version() const {
		return "1.23.5";
	}

	int numpy::year() const {
		return 2022;
	}


	/*===Class rectangle===*/
	rectangle::rectangle(int x1, int y1, int x2, int y2) : \
		x1(x1), y1(y1), x2(x2), y2(y2) {

	}

	void rectangle::print(std::ostream& ss) const {
		ss << std::format("({},{}) - ({},{})", x1, y1, x2, y2);
	}

	/*move cannot return void, it must return class, otherwise
	expression r.move(5,5).print(ss4) cannot work - r.move(5,5)
	must return class so that we can call print method upon it.
	Because of that, this is incorrect:
	void rectangle::move(int x, int y) {
		x1 += x; x2 += x; y1 += y; y2 += y;
	}*/
	rectangle rectangle::move(int x, int y) {
		x1 += x;
		x2 += x;
		y1 += y;
		y2 += y;
		/*I need to return myself; "this" is a pointer to me; by
		dereferencing "this" I get that to which "this" is pointing
		and that is myself.*/
		return *this;
	}


	/*===Class polygon===*/
	polygon::polygon(int points) {
		arr = new point[points];
	}

	polygon::~polygon() {
		delete[] arr; arr = 0;
	}

	/*ht tps://stackoverflow.com/questions/24227980/c-copy-constructor-\
	for-class-with-dynamically-allocated-array
	Array::Array( const Array & obj ): _size(obj._size)
	{
		_arr = new int[_size];

		for(int i=0;i<_size;i++)
		 _arr[i] = obj._arr[i];
	}*/
	polygon::polygon(const polygon& other) : \
		arr(new point[other.position]), position(other.position) {
		for (int i = 0; i < other.position; i++) {
			arr[i] = other.arr[i];
		}
	}

	void polygon::add(point p) {
		arr[position] = p;
		position += 1;
	}

	double polygon::perimeter() {
		double perimeter = 0;
		int i = 0;
		for (i; i < position - 1; i++) {
			perimeter += std::hypot(arr[i + 1].x - arr[i].x, \
				arr[i + 1].y - arr[i].y);
		}
		perimeter += std::hypot(arr[0].x - arr[i].x, arr[0].y - arr[i].y);

		return perimeter;
	}
}
