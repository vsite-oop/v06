#include "app.h"
#include <iostream>

int main()
{
    using namespace vsite::oop::v6;
    using namespace std::string_literals;

    std::cout << "Testing minimum function:" << std::endl;
    std::cout << "minimum(12, 13): " << minimum(12, 13) << std::endl;
    std::cout << "minimum(12u, 13u): " << minimum(12u, 13u) << std::endl;
    std::cout << "minimum(-10, -5): " << minimum(-10, -5) << std::endl;
    std::cout << "minimum(3.5, 4.6): " << minimum(3.5, 4.6) << std::endl;
    std::cout << "minimum(-1.23f, -4.56f): " << minimum(-1.23f, -4.56f) << std::endl;
    std::cout << "minimum(\"abc\", \"de\"): " << minimum("abc"s, "de"s) << std::endl;
    std::cout << "minimum(\"DEF\", \"ab\"): " << minimum("DEF"s, "ab"s) << std::endl;

    std::cout << "\nTesting fixed_array template:" << std::endl;

    fixed_array<int, 10> intArray;
    std::cout << "intArray.size(): " << intArray.size() << std::endl;

    fixed_array<double, 20> doubleArray;
    std::cout << "doubleArray.size(): " << doubleArray.size() << std::endl;

    fixed_array<point<double>, 30> pointArray;
    std::cout << "pointArray.size(): " << pointArray.size() << std::endl;

    return 0;
}
