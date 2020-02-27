#include<iostream>
using namespace std;
class const
{
int a,b,c;
public:
const()
{
cout<<"dc\n";
}
const(int x,int y)
{
cout<<"enter the two numbrs";
cin>>x>>y;
x=x+y;
cout<<"add="<<x;
}
};
int main()
{
const a1;
const a2(3,6);
return 0;
}
