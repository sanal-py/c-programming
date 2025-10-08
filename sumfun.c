#include<stdio.h>
int add(int, int);
int main()
{
	int a,b,sum;
	printf("enter two num");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("sum=%d\n",sum);
	return 0;
}
int add(int x,int y)
{
	return x+y;
}