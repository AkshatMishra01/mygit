#include<iostream>
using namespace std;
class rest
{
int a,b,c;
public:
add()
{
cout<<"enter the 2 numbers";
cin>>a>>b;
c=a+b;
}
};
class wake : public rest
{
public:
sleep()
{
cout<<"sleeping function";
}
cout<<"this is the second function ";
};
class run : public wake 
{
int x;
public:
void walk ()
{
cout<<"lets walk";
}
};
int main()
{
rest o1;
  wake o2;
  run o3;
  o3.sleep();
  o2.add();
return 0;
}
