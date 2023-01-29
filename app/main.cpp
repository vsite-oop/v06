#include "app.h"
#include <iostream>

using namespace vsite::oop::v6;
int main()
{
    std::cout << "**************** Perimeter calculator *****************" << std::endl;
    std::cout << "Insert number of vertices: ";
    int vertices;
    std::cin >> vertices;
    auto poli = polygon(vertices);

    for (int i = 0; i < vertices; ++i) {
        int x, y;
        std::cout << "Insert X coordinate for point " << i + 1 << " :";
        std::cin >> x;
        std::cout << "Insert Y coordinate for point " << i + 1 << " :";
        std::cin >> y;
        poli.add({ x, y });
    }

    std::cout << "Perimeter is: " << poli.perimeter() << std::endl;
}
