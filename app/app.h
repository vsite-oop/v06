#pragma once
#include <string>
#include <memory>
#include <vector>

namespace vsite::oop::v6 
{
    namespace py
    {
        class package {
        public:
            virtual ~package() = default;
            virtual std::string name() const = 0;
            virtual std::string version() const = 0;
            virtual int year() const = 0;
        };
    } // namespace py

    bool is_flush(const std::string* cards, int deckSize);

    class numpy : public py::package {
    public:
        numpy() = default;
        ~numpy() = default;
        std::string name() const override;
        std::string version() const override;
        int year() const override;
    };

    class rectangle {
        int x1, y1, x2, y2;
    public:
        rectangle(const int& a, const int& b, const int& c, const int& d);
        rectangle& move(const int xMove, const int yMove);
        std::ostream& print (std::ostream& ss) const;
    };

    struct point {
        int x;
        int y;
    };

    class polygon {
        point* points;
        int pointsAdded = 0;
    public:
        polygon(const int size);
        ~polygon();
        polygon(const polygon& other);
        void add(const point p);
        double perimeter() const;

    };

} // namespace vsite::oop::v6