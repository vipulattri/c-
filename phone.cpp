#include<iostream>
using namespace std;
class phone{
public :
double cost;
int slots;

};
int main(){
    phone y6;
    phone y7;
    y6.cost = 6000;
    y7.cost = 7500;
    y6.slots = 5;
    y7.slots = 3;
    cout<<"The cost of huawei y6 is"<<y6.cost<<endl;
    cout<<"The cost of huawei y7 is"<<y7.cost<<endl;
    cout<<"The slots of huawei y6 is"<<y6.slots<<endl;
    cout<<"The slots of huawei y7 is"<<y7.slots<<endl;
    return 0;
}
