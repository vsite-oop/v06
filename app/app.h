#pragma once
#include <string>
#include <memory>

namespace py
{
	class package
	{
	public:
		virtual ~package() = default;
		virtual std::string name() const = 0;
		virtual std::string version() const = 0;
		virtual int year() const = 0;
	};
}

namespace vsite::oop::v6 
{
	bool is_flush(const std::string* cards, int count);

	class numpy : public py::package
	{
	public:
		std::string name() const override;
		std::string version() const override;
		int year() const override;
		~numpy() override { };
	};

	class rectangle
	{
	private:
		int x1, y1, x2, y2;
	public:
		rectangle(int x1, int y1, int x2, int y2);

		void print(std::ostream& ss);
		rectangle& move(int dx, int dy);
	};

	struct point
	{
	public:
		int x, y;

	};

	class polygon
	{
	private:
		int size;
		int pointCount = 0;

		point* points;

	public:
		polygon(int size);

		void add(const point& newPoint);
		double perimeter();
	};
}
