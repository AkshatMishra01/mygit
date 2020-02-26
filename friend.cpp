#include<iostream>
using namespace std;
class add
{
int add;
public:
addition()
{
add=4;
}
friend void operation();
};
void operation(add m)
{
m.add=6;
cout<<"addition value is ="<<m.add;
}
int main()
{
add obj;
operation(obj);
return 0;
}
