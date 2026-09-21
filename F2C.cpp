#include<stdio.h>
int main(){
	float c,f;
	printf("Enter Fahrenheit:\n");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Celcius:\n %f",c);
	return 0;
}
