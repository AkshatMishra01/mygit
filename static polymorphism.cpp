#include<iostream>
using namespace std;
class parent 
{
int par_id;
public:
void jojo()
{
cout<<"i am jojo";
}
};
class child : public parent 
{
int c_hild;
public:
void jojo()
{
cout<<"i am jojo2";
}
};
int main()
{
child obj; //declared object of child
obj.parent :: jojo(); // command to activate jojo function of parent class (static polmorphism)
return 0;
}
