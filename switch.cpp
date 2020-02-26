#include<iostream>
using namespace std;
class cases
{
int s;
public:
cases()
{
cout<<"this is the commanding switch";
cin>>s;
switch(s)
{
case 1:
cout<<"this is the first case";
break;
case 2:
cout<<"case2";
break;
case 3:
cout<<"case3";
break;
}
}
};
int main()
{
cases obj;
obj.cases();
return 0;
}
