#include<iostream>
using namespace std;
class volhemi{
    public:
    double init;
    double pi;
    double r;
    double getvolhemi(){
        return init*pi*r*r*r;

    }
};
int main(){
    volhemi volhemi1;
    volhemi1.init = 0.66;
    volhemi1.pi = 3.14;
    volhemi1.r = 10;
    cout<<"Volume of the hemisphere is  "<<volhemi1.getvolhemi()<<endl;
    return 0;
}