#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],x,y;
	printf("for matrix a\n");
	for(x=0;x<2;x++)
	{
		{
		for(y=0;y<2;y++)
		scanf("%d",&a[x][y]);
		}
		}
	printf("for matrix b\n");
	for(x=0;x<2;x++)
	{
		for(y=0;y<2;y++)
		{
			scanf("%d",&b[x][y]);
		}
	}
	for(x=0;x<2;x++)
	{
		for(y=0;y<2;y++)
		{
			c[x][y]=a[x][y]+b[x][y];
		}
	}
	printf("lets add these 2 matrices");
	 printf("%d\n",c[x][y]);
	 
}
