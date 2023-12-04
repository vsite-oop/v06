#pragma once

namespace vsite::oop::v6 
{

	template<typename T>
	T minimum(T broj1, T broj2)
	{
		if (broj1 > broj2)
			return broj2;
		else
			return broj1;
	}
	template<typename T ,size_t N>
	class fixed_array {
		T arr[N];
	public:
		size_t size() { return N; }
		T operator [](int broj)
		{
			return arr[broj];
		}
	};
	template<typename T>
	struct point {};
}