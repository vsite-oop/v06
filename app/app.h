#pragma once

namespace vsite::oop::v6 
{
	template <typename broj>
	broj minimum(broj x, broj y) 
	{
		return x < y ? x : y;
	}

	template <typename broj, int n>
	class fixed_array
	{
		broj arr[n];

	public:
		unsigned long long size()
		{
			return n;
		}

		broj operator[] (int i)
		{
			return arr[i];
		}
	};

	template<typename broj>
	struct point 
	{
		broj x, y;
	};


}