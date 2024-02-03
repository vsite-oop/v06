#pragma once
#include <string>

namespace vsite::oop::v6
{
	template<typename p>
	p minimum(p a, p b) {
		return a < b ? a : b;
	}


	template<typename T, int S>
	class fixed_array {
	private:
		T arr[S];

	public:
		unsigned long long size() {
			return S;
		}

		T operator[] (int a) {
			return arr[a];
		}
	};

	template<typename T>
	struct point {
		T a;
	};
}