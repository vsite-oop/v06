#include "CppUnitTest.h"
#include "../app/app.h"

#include <type_traits>
#include <numbers>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace vsite::oop::v6;
using namespace std::string_literals;

namespace all_tests
{
	TEST_CLASS(test_v06) 
	{
	public:

		TEST_METHOD(test_is_flush)
		{
			const std::string cards1[] { "H8", "HA", "H6", "H3", "HQ" };
			Assert::IsTrue(is_flush(cards1, 5));
			const std::string cards2[] { "CA", "C9", "CT", "C9", "C2" };
			Assert::IsTrue(is_flush(cards2, 5));
			const std::string cards3[] { "H8", "SA", "H6", "H3", "HQ" };
			Assert::IsFalse(is_flush(cards3, 5));
			const std::string cards4[] { "CA", "HA", "SA", "DA", "CK" };
			Assert::IsFalse(is_flush(cards4, 5));
		}

		TEST_METHOD(test_py_package)
		{
			Assert::IsTrue(std::is_abstract_v<py::package>);
			Assert::IsTrue(std::is_base_of_v<py::package, numpy>);

			const py::package& pkg = numpy();
			Assert::AreEqual("NumPy"s, pkg.name());
			Assert::AreEqual("1.23.5"s, pkg.version());
			Assert::AreEqual(2022, pkg.year());
		}

		TEST_METHOD(test_rectangle)
		{
			std::stringstream ss1;
			rectangle r(0, 0, 20, 20);
			r.print(ss1);
			Assert::AreEqual("(0,0) - (20,20)"s, ss1.str());
			r.move(10, 0);
			std::stringstream ss2;
			r.print(ss2);
			Assert::AreEqual("(10,0) - (30,20)"s, ss2.str());
			r.move(0, 20);
			std::stringstream ss3;
			r.print(ss3);
			Assert::AreEqual("(10,20) - (30,40)"s, ss3.str());
			std::stringstream ss4;
			r.move(5, 5).print(ss4);
			Assert::AreEqual("(15,25) - (35,45)"s, ss4.str());
		}
		/*
		TEST_METHOD(test_polygon)
		{
			point p{ 1,2 };
			Assert::AreEqual(1, p.x);
			Assert::AreEqual(2, p.y);

			polygon p1(4);
			p1.add({  0,  0 });
			p1.add({ 10,  0 });
			p1.add({ 10, 10 });
			p1.add({  0, 10 });
			Assert::AreEqual(40., p1.perimeter());

			polygon p2(3);
			p2.add({ 1, 1 });
			p2.add({ 3, 1 });
			p2.add({ 2, 2 });
			Assert::AreEqual(2 + 2 * std::numbers::sqrt2, p2.perimeter());

			polygon p3 = p1;
			Assert::AreEqual(40., p3.perimeter());
		}*/
	};
}
