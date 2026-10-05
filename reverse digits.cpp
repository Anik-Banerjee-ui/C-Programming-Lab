#include<stdio.h>
int main()
{
	int n,rev,digits;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		digits=n%10;
		rev=rev*10+digits;
		n=n/10;
		}	
	printf("reverse:%d",rev);	
	return 0;
}
