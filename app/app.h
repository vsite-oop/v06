#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v6 
{
	bool is_flush(const std::string* s, int i);

	namespace py {
		class package {
		public:
			virtual std::string name() const = 0;
			virtual std::string version() const = 0;
			virtual int year() const = 0;

			virtual ~package() = default;
		};
	}
	class numpy : public py::package {

		std::string name() const override;
		std::string version() const override;
		int year() const override;
	};

	class rectangle {
		int x1, x2, y1, y2;
	public:
		rectangle(int x1, int x2, int y1, int y2);
		void print(std::stringstream& ss);
		rectangle& move(int k1, int k2);
	};
}