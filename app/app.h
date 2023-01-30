#pragma once
#include <string>
#include <memory>
#include <type_traits>
#include<sstream>

namespace vsite::oop::v6
{
	bool is_flush(const std::string card[], int x);


	namespace py {
		class package {
		public:
			virtual  std::string name() const = 0;
			virtual  std::string version() const = 0;
			virtual  int year() const = 0;
			virtual ~package() = 0 {};
		};



	}
	class numpy : public py::package {
	public:
		std::string name() const override { return "NumPy"; }
		std::string version() const override { return "1.23.5"; }
		int year() const override { return 2022; }

	};

	class rectangle {
		int x1, y1, x2, y2;
	public:
		rectangle(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {};
		void print(std::ostream& ss) const;
		rectangle& move(int dx, int dy);

	};


	struct point { int x, y; };

	class polygon {
		int n; point* p;
	public:
		polygon(int n) :p(new point[n]), n(0) {}
		polygon(const polygon& other) : p(new point[other.n]), n(other.n) {
			for (int i = 0; i < n; ++i)
				p[i] = other.p[i];
		}
		~polygon() { delete[] p; }

		void add(const point& pt);
		double distance(const point& a, const point& b);
		double perimeter();
	};


}