#include<iostream>
using namespace std;
class hemisphere{
    public:
    double inta;
    double pi;
    double r;
    double hemiarea(){
        return inta*pi*r*r;

    }
};
int main(){
 hemisphere hemisphere1;
 hemisphere1.inta = 3;
 hemisphere1.pi = 3.14;
 hemisphere1.r = 8;
 cout<<"Area of the hemisphere is "<<hemisphere1.hemiarea()<<endl;
 return 0;

}