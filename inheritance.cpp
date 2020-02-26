#include<iostream>
using namespace std;
class parent
{
int par_id;
public:
//this is the parent class from which the characteristics have to be inherited
father()
{
cout<<"i am the father function";
}
};
class child : public parent
{
int a;
public:
son()
{
cout<<"i am the son";
}
};
int main()
{
child obj1;
obj1.father();
return 0;
}
