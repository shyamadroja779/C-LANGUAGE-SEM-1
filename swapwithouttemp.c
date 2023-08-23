#include<stdio.h>

void main(){
	int a,b;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a,b %d %d",a,b);
}
