#include<stdio.h>
int main(){
	int p,r,t;
	float si=0;
	printf("enter principle:\n");
	scanf("%d",&p);
	printf("enter RATE OF INTEREST:\n");
	scanf("%d",&r);
	printf("enter TIME:\n");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("simple interest =\n%f",si);
	
		return 0;
}
