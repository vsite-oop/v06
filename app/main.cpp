#include "app.h"
#include <iostream>

int main()
{
   using namespace vsite::oop::v6;
   unsigned int n;
   std::cout<<"Unesite broj tocaka poligona. "<<"\n";
   std::cin>>n;
   polygon a(n);
   while(n--){
    point p;
    std::cin>>p.x>>p.y;
    a.add(p);
   }
   std::cout<<"Opseg poligona je "<<a.perimeter();



}
