#include "app.h"
#include <algorithm>
#include <iostream>

namespace vsite::oop::v6
{
	bool is_flush(const std::string arr[], int size)
	{
		for (int i = 0; i < size; i++) {
			if (arr[i][0] != arr[0][0]) {
				return false;
			}
		}
		return true;
	}
	void rectangle::print()
	{
		//use streamstring for .format(string)
		std::cout << "(" << x1 << "," << y1 << ") " << "- " << "(" << x2 << "," << y2 << ")";
	}
	rectangle& rectangle::move(int x, int y)
	{
		x1 += x; x2 += x;
		y1 += y; y2 += y;
		return *this;
	}

	polygon::polygon(int size) : mLength(size) , mCnt(0) {
		mPointArr = new point[mLength];
	}

	polygon::polygon(const polygon& other) : mLength(other.mLength), mPointArr(other.mPointArr), mCnt(0) {

	}
}