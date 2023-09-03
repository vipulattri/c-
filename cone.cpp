#include<iostream>
using namespace std;
class cone{
    public:
    double init;
    double pi;
    double r;
    double h;
    double coneArea(){
        return init*pi*r*r*h;

    }
};
int main(){
    cone cone1;
    cone1.init = 0.33;
    cone1.pi = 3.14;
    cone1.r = 7;
    cone1.h = 3;
    cout<<"the area of the cone is "<<cone1.coneArea()<<endl;
    return 0;
}