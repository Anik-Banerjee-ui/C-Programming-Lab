#include<stdio.h>
int main()
{
	int n,sum,digits;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		digits=n%10;
		sum=sum+digits;
		n=n/10;
		}
		printf("sum=%d",sum);
	return 0;
}
