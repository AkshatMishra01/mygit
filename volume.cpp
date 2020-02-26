#include<iostream>
using namespace std;
class volume
{
int vol,a,r;
int sphere()
{
cout<<"this is the sphere function\nenter the radius";
cin>>r;
vol=4/3*3.14*(r*r*r);
cout<<"volume is ="<<vol;
}
int cube()
{
cout<<"this is the cube function\n enter the side";
cin>>a;
vol=a*a*a;
cout<<"the volume of the cube is="<<vol;
}
};
int main()
{
volume obj;
obj.sphere();
obj.cube();
return 0;
}
