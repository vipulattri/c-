#include<iostream>
using namespace std;
class triangle{
    public:
    double pi;
    double r;
    double h;
    double gettriangle(){
        return pi*r*r*h;
    }
};
int main(){
 triangle triangle1;
 triangle1.pi = 3.14;
 triangle1.r = 4.0;
 triangle1.h = 7.0;
 cout<<"Area of the triangle is "<<triangle1.gettriangle()<<endl;
 return 0;
}