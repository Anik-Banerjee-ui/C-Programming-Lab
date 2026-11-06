#include<stdio.h>
int main ()
{
	int i,j,k,n;
	printf("enter row:\n");
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++)
	{
		for(k=1;k<=n/2+1-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
		}	
	printf("\n");	 
	}
	return 0;
	
}
