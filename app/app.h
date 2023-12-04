#pragma once

#include <cstddef>
#include <algorithm>

namespace vsite::oop::v6 
{
    template <typename T>
    struct point {
        T x;
        T y;
    };

    template <typename T>
    const T& minimum(const T& a, const T& b) {
        return (a < b) ? a : b;
    }

    template <typename T, std::size_t Size>
    class fixed_array {
    public:
        using value_type = T;

        fixed_array() = default;

        const T& operator[](std::size_t index) const {
            return data[index];
        }

        std::size_t size() const {
            return Size;
        }

    private:
        T data[Size];
    };

    template <typename T>
    class fixed_array<point<T>, 30> {
    public:
        using value_type = point<T>;

        fixed_array() = default;

        const point<T>& operator[](std::size_t index) const {
            return data[index];
        }

        std::size_t size() const {
            return 30;
        }

    private:
        point<T> data[30];

    };
}