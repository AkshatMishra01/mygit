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

}
cout<<"this is the second function ";
};
int main()
{
rest o1;
return 0;
}
