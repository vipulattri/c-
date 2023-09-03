#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number to check the grade\n";
    cin>>num;
   if(num<=0 || num>=100){
    cout<<"Invalid Input"<<endl;
   }
   else if(num>=0 && num<=33){
    cout<<"Failed";
   }
   else if(num>=34 && num<=50){
    cout<<"E grade"; 
   }
   else if(num>=51 && num<=60){
    cout<<"D grade";
   }
   else if(num>=61 && num<=70){
    cout<<"C grade";
   }
   else if(num>=71 && num<=80){
    cout<<"B grade";
   }
    
   else if(num>=81 && num<=90){
    cout<<"A grade";
   }
    
   else if(num>=91 && num<=100){
    cout<<"A+ grade";
   }
   return 0;
}