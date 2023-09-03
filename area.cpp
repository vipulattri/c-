#include<iostream>
using namespace std;
class Room{
    double length;
    double breadth;
    double height;
    double calculateArea{
        return length*breadth;
    }
    double calculateVolume{
        return length*breadth*height;
    }
};
int main(){
    Room Room1;
    Room1.length = 20;
    Room1.breadth = 30;
    Room1.height = 40;
    cout<<"area of rectangle is"<<Room1.calculateArea;
    cout<<"volume of cube is"<<Room1.calculateVolume;
    return 0;
}