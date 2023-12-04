#pragma once

namespace vsite::oop::v6
{
    template <typename T>
    T minimum(const T& a, const T& b)
    {
        if (a < b) {
            return a;
        }
        else {
            return b;
        }
    }


    template <typename T, int N>
    class fixed_array {
        T data[N];
    public:
        size_t size() { return N; }
        T operator[] (int i) 
        { return data[i]; }
    };

    template<typename T>
    struct point
    {
        T p;
    };

}