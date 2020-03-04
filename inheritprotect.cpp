#include<iostream>
using namespace std;
class papa
{
protected :
int a ,b,c;
void fun()
{
cout<<"believer";
}
};
class beta : protected papa
{
void mom()
 {
 	cout<<"mom's love resides in every child";
 }
};
int main()
{
beta obj;
obj.fun();
return 0;
}
