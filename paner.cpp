#include<iostream>
using namespace std;
class sphere{
    public:
double int1;
double pi;
double r;
double sphereVolume(){
    return int1*pi*r*r;
}
};
int main(){
    sphere sphere1;
    sphere1.int1 = 4;
    sphere1.pi = 3.14;
    sphere1.r = 3;
    cout<<"The volume of the sphere is "<<sphere1.sphereVolume()<<endl;
    return 0;
}
