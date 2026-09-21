#include<stdio.h>
int main()
{
	int unit,bill;
	printf("Enter Unit:\n");
	scanf("%d",&unit);
	if(unit<=100)
	{
		bill=unit*2;	
	}
	else if(unit>=101 && unit<=200)
	{
		bill=200+(unit-100)*3;
	}
	else if(unit>=201 && unit<=300)
	{
		bill=200+300+(unit-200)*5;
	}
	else
	{
		bill=200+300+500+(unit-300)*7;
	}
	printf("The Bill is:%d\n",bill);
	
	return 0;
}
