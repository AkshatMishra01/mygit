#include<stdio.h>
fun();
fun()
{
	printf("fun function active");
	
}
int main()
{
	int a,b,c;
	printf("enter the two no.");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("add=%d",c);
	fun();
	return 0;
}
