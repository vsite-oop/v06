#pragma once
#include <string>
#include <memory>
#include <cmath>  // hypot

namespace vsite::oop::v6
{
	// py namespace, unutar njega klasu, izvan toga drugu klasu
	// .h namespace i klasu
	// cpp nista jer interface nema implementaciju

	/*Implementirajte klase potrebne da svi testovi prolaze.
	U programu unesite broj toèaka poligona i sve toèke poligona te
	ispišite opseg poligona.


	Funkcija std::hypot prima duljine dviju stranica pravokutnog
	trokuta, a vraæa hipotenuzu po formuli C=sqrt(a^2 + b^2), dakle
	svejedno dal oduzimam prvu tocku od druge il drugu od prve jer
	se rezultat kvadrira i negativan opet postaje pozitivan.*/

	bool is_flush(const std::string* arr, int n);


	namespace py {
		/*Abstract class - min. 1 virtual function*/
		class package {
		public:
			virtual std::string name() const = 0;
			virtual std::string version() const = 0;
			virtual int year() const = 0;
		};
	}


	class numpy : public py::package {
	public:
		std::string name() const;
		std::string version() const;
		int year() const;
	};


	class rectangle {
		int x1;
		int y1;
		int x2;
		int y2;
	public:
		rectangle(int x1, int y1, int x2, int y2);
		void print(std::ostream& ss) const;
		rectangle move(int x, int y);
	};


	class point {
	public:
		int x;
		int y;
	};


	/*Constructor receives number of points for a polygon.
	Points are stored in dynamically allocated array.*/
	class polygon {
		point* arr;
		int position = 0; // static member -> default value = 0
	public:
		polygon(int points);
		~polygon();
		/*test_polygon > last Assert > copy constructor*/
		polygon(const polygon& other);
		void add(point p);
		double perimeter();
	};
}
