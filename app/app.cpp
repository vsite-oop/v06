#include "app.h"
#include <algorithm>
#include <iostream>
#include <cmath>


namespace vsite::oop::v6
{
    bool is_flush(const std::string cards[],int size){
        for(int i=1;i<size;++i){

            if(cards[i][0]!=cards[0][0])return false;
        }
      return true;
    }

    std::string numpy::name()const{return "NumPy";}
    std::string numpy::version()const{return "1.23.5";}
    int numpy::year()const{return 2022;}

    
    

    rectangle::rectangle(int a,int b,int c,int d):x1{a},y1{b},x2{c},y2{d}{}
    rectangle& rectangle::move(int a,int b){
        x1+=a;
        x2+=a;
        y1+=b;
        y2+=b;


        return *this;
    }
    void rectangle::print(std::ostream& ss)const{
        ss<<"("<<x1<<","<<y1<<") - ("<<x2<<","<<y2<<")";
    }



   

   polygon::polygon(unsigned int a):arr_size{a},i{0}{

        p=new point[arr_size];
   }
   polygon::polygon(const polygon& other):p{new point[other.arr_size]},i{other.i}{
         for(int j=0;j<i;++j)p[j]=other.p[j];
   }
   polygon::~polygon(){
        delete[] p;
        p=nullptr;
    }
   void polygon::add(const point& p1){
       p[i]=p1;
        ++i;

   }
    double polygon::distance(const point& a,const point& b){
        
     return std::hypot(b.x-a.x,b.y-a.y);

   }
   double polygon::perimeter()const{
       auto o=distance(p[i-1],p[0]);
       for(int j=0;j<i-1;++j)o+=distance(p[i],p[i+1]);

      return o;

   }





}