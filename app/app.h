#pragma once

namespace vsite::oop::v6 
{
	template<typename T>
	T minimum(T a, T b) {
		return (a > b) ? b : a;
	}

	template<typename T, unsigned long long n>
	class fixed_array {
		T arr[n];
	public:
		unsigned long long size() { return n; }
		T& operator[](int i) { return arr[i]; }
	};

	template<typename T>
	struct point{};
}