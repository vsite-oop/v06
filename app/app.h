#pragma once

namespace vsite::oop::v6
{
	template <typename T>
	T minimum(T a, T b) {
		return a < b ? a : b;
	}

	template <typename T, int SIZE>
	class fixed_array {
		T arr[SIZE];
	public:
		unsigned long long size() const {
			return SIZE;
		}

		T operator [] (int i) {
			return arr[i];
		}
	};

	template <typename T>
	struct point {
		T x;
		T y;
	};
}