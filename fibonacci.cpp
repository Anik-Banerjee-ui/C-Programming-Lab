#include<stdio.h>

int main()
{
	int n,i=1,a=0,b=1,c=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d...",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
