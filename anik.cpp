#include<stdio.h>
int main(){
	int l,b,area=0,peri=0;
	printf("enter L:\n");
	scanf("%d",&l);
	printf("enter B:\n");
	scanf("%d",&b);
	area=l*b;
	peri=2*(l+b);
	printf("Area =%d\n",area);
	printf("Perimeter =%d\n",peri);
	return 0;
}
