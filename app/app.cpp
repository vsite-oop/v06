#include "app.h"
#include <algorithm>
#include <sstream>

namespace vsite::oop::v6
{
	bool is_flush(const std::string* cards, int count)
	{
		char firstColor = cards[0][0];

		for (int i = 1; i < count; i++)
		{
			if (firstColor != cards[i][0])
				return false;
		}
		return true;
	}

	std::string numpy::name() const
	{
		return "NumPy";
	}

	std::string numpy::version() const
	{
		return "1.23.5";
	}

	int numpy::year() const
	{
		return 2022;
	}

	rectangle::rectangle(int x1, int y1, int x2, int y2) :
		x1(x1), y1(y1), x2(x2), y2(y2) { }

	void rectangle::print(std::ostream& ss)
	{
		ss << "(" << x1 << "," << y1 << ") - (" << x2 << "," << y2 << ")";
	}

	rectangle& rectangle::move(int dx, int dy)
	{
		x1 += dx;
		x2 += dx;
		y1 += dy;
		y2 += dy;

		return *this;
	}

	polygon::polygon(int size) :
		size(size), points(new point[size]) { }

	/*polygon::polygon(const polygon& other) :
		size(other.size), points(new point[other.size])
	{
		for (int i = 0; i < other.size; i++)
		{
			points[i] = other.points[i];
		}
	}

	polygon::~polygon()
	{
		delete[] points;
	}*/

	void polygon::add(const point& newPoint)
	{
		points[pointCount] = newPoint;
		pointCount++;
	}

	double polygon::perimeter()
	{
		double peri = 0;
		for (int i = 0; i < pointCount; i++)
		{
			point& a = points[i]; // 0, 1, 2, 3
			point& b = i+1 >= pointCount? points[0] : points[i+1]; // 1, 2, 3, 0

			double current_side = hypot(b.x - a.x, b.y - a.y);
			peri += current_side;
		}

		return peri;
	}
}