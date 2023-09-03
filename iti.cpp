#include<iostream>
using namespace std;    
class area{
    public:
    int length;
    int breadth;
   int calculateArea(){
    return length*breadth;
   }
};
int main(){
 area area1;
 area1.length =35;
 area1.breadth =45;
 cout<<"Area of the recatangle is "<<area1.calculateArea()<<endl;
 return 0;
}