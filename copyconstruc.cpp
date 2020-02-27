#include<iostream>
using namespace std;
class free
{
	int a,b,c;
	public:
	free()
	{
		cout<<"default constructor\n";
	}
	free(int a,int b)
	{
		cout<<"parametrized constructor\n";
	}
	free(const free & m)
	{
		cout<<"copy constructor\n";
	}
		
};
int main()
{
	free a1;
	free a2(3,4);
	free a3();
	return 0;
}
