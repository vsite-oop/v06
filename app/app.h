#pragma once
#include <string>
#include <memory>
#include <sstream>
#include <iostream>

namespace vsite::oop::v6
{
	bool is_flush(const std::string arr[], int size);

	class rectangle {
	public:
		rectangle(int x1, int y1, int x2, int y2) : x1(x1), x2(x2), y1(y1), y2(y2) {};
		void print();
		rectangle& move(int x, int y);
	private:
		int x1, x2, y1, y2;
	};

	struct point {
		int x;
		int y;
	};

	double distance(const point& a, const point& b) {
		int dx = b.x - a.x, dy = b.y - a.y;
		return sqrt(dx * dx + dy * dy);
	}

	class polygon {
	public:
		polygon(int size) {};
		polygon(const polygon& other) {};
		~polygon() { delete[] mPointArr; }
		void add(const point& point) { mPointArr[mCnt++] = point; }

		double perimeter() {
			double d = distance(mPointArr[mCnt - 1], mPointArr[0]);
			for (int i = 0; i < mCnt - 1; ++i)
				d += distance(mPointArr[i], mPointArr[i + 1]);
			return d;
		}
	private:
		int mCnt = 0;
		int mLength;
		point* mPointArr;
	};

	class numpy : public py::package {
	public:
		virtual std::string name() override { return "NumPy"; };
		virtual std::string version() override { return "1.23.5"; };
		virtual int year() override { return 2022; };
	};
}

namespace py {
	class package {
	public:
		virtual std::string name() {};
		virtual std::string version() {};
		virtual int year() {};
		virtual ~package() {};
	};
}

