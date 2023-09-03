#include<iostream>
using namespace std;
class volsphere{
    public: 
 double inta;
 double pi;
 double r;
 double getVolsphere(){
    return inta*pi*r*r*r;

 }
};
int main(){
    volsphere volsphere1;
    volsphere1.inta = 1.33;
    volsphere1.pi = 3.14;
    volsphere1.r = 7;
    cout<<"volume of the sphere is "<<volsphere1.getVolsphere()<<endl;
    return 0;
}