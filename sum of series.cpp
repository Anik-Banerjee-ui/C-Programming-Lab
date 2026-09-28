#include<stdio.h>

int main()
{
	int n,i=1,t=1,s=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+t;
		t=t+i;
		i++;
	}	
	printf("%d",s);
	return 0;
}
