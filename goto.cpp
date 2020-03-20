#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float sum=0,a,b,c;
cout<<"this is the label file";
goto label;
int add()
{
sum=a+b;
}
label;
cout<<"enter 2 numbers";
cin>>a>>b;
goto add();
return 0;
}
