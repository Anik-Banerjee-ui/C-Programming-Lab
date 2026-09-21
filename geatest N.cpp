#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter A:\n");
	scanf("%d",&a);
	printf("enter B:\n");
	scanf("%d",&b);
	printf("enter C:\n");
	scanf("%d",&c);
	printf("The numbers are:%d,%d,%d",a,b,c);
	if(a>b && a>c)
		printf("%d IS the greatest number\n",a);
	else if(b>a && b>c)
		printf("%d IS the greatest number\n",b);
	else
		printf("%d IS the greatest number\n",c);	
	return 0;
}
