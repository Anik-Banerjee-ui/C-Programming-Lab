#include<stdio.h>
int main()
{
	int n,i=1;
	int a=0,b=0,c=1,d;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\t%d",a);
		d=c+a+b;
		a=b;
		b=c;
		c=d;
		i++;
	}
	return 0;
}
