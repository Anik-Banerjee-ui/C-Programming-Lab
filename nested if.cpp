#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if (n>0)
	{
		printf("The number %d is Positive\n",n);
		if(n%2==0)
		{
			printf("The number %d is even",n);
		}
		else
		{
			printf("The number %d is odd",n);
		}
	}
	else if(n<0)
	{
		printf("The number %d is negative",n);
	}
	else 
	{
		printf("The number Is 0");
	}
	return 0;
}
