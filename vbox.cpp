#include<iostream>
using namespace std;
class box{
    public:
    double length;
    double breadth;
    double height;
};
int main(){
    box box1;
    box box2;
    double volume = 0.0;
box1.height = 10.0;
box1.length = 12.0;
box1.breadth = 13.0;
box2.height = 10.0;
box2.length = 15.0;
box2.breadth = 10.0;
volume = box1.height*box1.length*box1.breadth;
cout<<"volume of box 1 is "<<volume<<endl;\
volume = box2.height*box2.length*box2.breadth;
cout<<"volume of box 2 is "<<volume<<endl;
return 0;
}