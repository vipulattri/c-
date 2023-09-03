#include<iostream>
using namespace std;
class room{
    public:
    double length;
    double breadth;
    double height;
    double calculateArea(){
        return length*breadth;

    }
    double calculateVolume(){
        return length*breadth*height;
    }

};
int main(){
    room room1;
    room1.length =19;
    room1.breadth = 20;
    room1.height = 40;
    cout<<"area of the rectangle is "<<room1.calculateArea()<<endl;
    cout<<"volume of the rectangle is "<<room1.calculateVolume()<<endl;
    return 0;
}