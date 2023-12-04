#pragma once

namespace vsite::oop::v6 
{
	template<typename Type>
	Type minimum(Type a, Type b) {
		return (a < b) ? a : b;
	}

	template<typename T, int N>
	class fixed_array {
		T arr[N];
	public:
		size_t size() { return N; }
		T& operator[](int i) { return arr[i];}
	};

	template<typename T>
	struct point {
		T x, y;
	};
}