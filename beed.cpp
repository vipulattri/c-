#include<iostream>
using namespace std;
class cube{
    public:
    int side;
    int getVolume(){
        return side*side*side;
    }

};
int main(){
cube cube1;
cube1.side = 25;
cout<<"The volume of the cube is "<<cube1.getVolume()<<endl;
return 0;
}