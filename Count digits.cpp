#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
		printf("total digits=%d",count);
	return 0;
}
