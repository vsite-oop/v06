#pragma once

namespace vsite::oop::v6 
{
	template<typename T>
	T minimum(T a, T b) {
		return (a < b) ? a : b;
	}

	template<typename T, int N>
	class fixed_array {
		T arr[N];
	public:
		size_t size() { return N; }
		T operator[] (int i) { return arr[i]; }
	};

	template<typename T>
	struct point {
		T p;
	};
}