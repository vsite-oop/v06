#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v6 
{

	bool is_flush(const std::string cards[], unsigned num_of_cards);

}


/*------------------------test 2----------------------*/
namespace py
{
	class package {
	public:
		virtual std::string name() const = 0;
		virtual std::string version() const = 0;
		virtual int year() const = 0;
		virtual ~package() = default;
	};

	
}

class numpy :public py::package {
	std::string name() const override;
	virtual std::string version() const override;
	virtual int year() const override;
	
};

/*----------------------------test 3-------------------------------*/
class rectangle {
	int _x1, _y1, _x2, _y2;
public:
	rectangle(int x1, int y1, int x2, int y2);
	virtual ~rectangle();
	virtual void print(std::ostream& input) const;
	rectangle& move(int x, int y);
};


class point {
	int x, y = 0;
public:
	point(int xp, int yp);
	
};


