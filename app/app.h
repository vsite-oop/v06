#pragma once
#include <string>

namespace vsite::oop::v6 
{
	template <typename T>
	T minimum(T a, T b) {
		return a < b ? a : b;
	}



	template <typename T, int S>
	class fixed_array {
		T arr[S];
	public:
		unsigned long long size() {
			return S;
		}
		T operator[](int i) {
			return arr[i];
		}
	};


	template <typename T>
	struct point{};
}