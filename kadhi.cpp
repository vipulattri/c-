#include<iostream>
using namespace std;
class circle{
    public:
double pi;
double r;
double circlearea(){
    return pi*r*r;
}
};
int main(){
    circle circle1;
    circle1.pi = 3.14;
    circle1.r = 7;
    cout<<"Area of the circle is:  "<<circle1.circlearea()<<endl;
    return 0;
}