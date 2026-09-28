#include<stdio.h>

int main()
{
	int n,i=2,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i=i+3;
		}	
	printf("%d",sum);
	return 0;
}
