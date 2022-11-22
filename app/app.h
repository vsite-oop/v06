#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v6 
{
	bool is_flush(const std::string*, int x);

	namespace py {
		class package {
		public:
			std::string virtual name() const = 0;
			std::string virtual version() const = 0;
			int virtual year() const = 0;
		};
	}

	class numpy :public py::package {
	public:
		std::string name() const override;
		std::string version() const override;
		int year() const override;
	};

	class rectangle {
		int x1;
		int y1;
		int x2;
		int y2;
	public:
		rectangle(int x1, int y1, int x2, int y2);
		void print(std::ostream& ss) const;
		rectangle& move(int x, int y);
	};

	class point {
	public:
		int x;
		int y;
	};

	class polygon {
		point* arr;
		uint32_t pos = 0;
	public:
		polygon(int size);
		~polygon();
		polygon(const polygon& other);
		void add(point p);
		double perimeter() const;
	};

	double distance(point a, point b);
}