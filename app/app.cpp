#include "app.h"
#include <algorithm>
#include <iostream>
#include <sstream>

namespace vsite::oop::v6
{
    bool is_flush(const std::string* cards, int deckSize) {
        auto color = cards[0][0];
        for (int i = 1; i < deckSize; ++i)
            if (cards[i][0] != color) return false;
        return true;
    }

    std::string numpy::name() const { return "NumPy"; };
    std::string numpy::version() const { return "1.23.5"; };
    int numpy::year() const { return 2022; };

    rectangle::rectangle(const int& a, const int& b, const int& c, const int& d) {
        x1 = a;
        x2 = c;
        y1 = b;
        y2 = d;
    }

    std::ostream& rectangle::print(std::ostream& ss) const {
        ss << "(" << x1 << "," << y1 << ") - (" << x2 << "," << y2 << ")";
        return ss;
    }

    rectangle& rectangle::move(const int xMove, const int yMove) {
        x1 += xMove; x2 += xMove;
        y1 += yMove; y2 += yMove;
        return *this;
    }

    polygon::polygon(int const size) 
        : points{ new point[size]}
    {
    }

    polygon::~polygon() {
        delete[] points;
    }

    void polygon::add(const point p) {
        points[pointsAdded] = p;
        ++pointsAdded;
    }

    polygon::polygon(const polygon& other)
        : pointsAdded{other.pointsAdded}
        , points{ new point[pointsAdded] }
    {
        std::copy(other.points, other.points + other.pointsAdded, points);
    };

    double polygon::perimeter() const {
        double result = 0;
        for (int i = 0; i < pointsAdded - 1; ++i) {
            point _p1 = points[i];
            point _p2 = points[i + 1];
            result += std::sqrt(std::pow(_p1.x - _p2.x, 2) + std::pow(_p1.y - _p2.y, 2));
            if (i == 0)
            {
                _p2 = points[pointsAdded - 1];
                result += std::sqrt(std::pow(_p1.x - _p2.x, 2) + std::pow(_p1.y - _p2.y, 2));
            }
        }

        return result;
    }
}