#include<iostream>
class cube;
{
    public:
    int side;
    int getvolume;
};
int cube::getvolume()
{
    return side*side*side;

}
int main()
{
    cube c1;
    c1.side =4;
    clrscr();
  cout<<"Volume of cube c1 ="<<c1.getvolume();
  return 0;
}