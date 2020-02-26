#include<iostream>
using namespace std;
class nameb;
class namea
{
public:
int a,b,c;
void fun()
{
cout<<"fun function";
}
friend class nameb;
};
class nameb
{
public:
void jojo()
{
cout<<"this is a friend function";
}
int popo(int a,float b)
{
cout<<"this is the second friend function";
cin>>a>>b;
c=a+b;
cout<<c;
}
};
int main()
{
namea obj;
jojo(obj);
popo(obj);
return 0;
}
