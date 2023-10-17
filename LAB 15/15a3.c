#include<stdio.h>
void main(){
	int n;
	printf("enter value of a : ");
	scanf("%d",&n);
	int i,a[n],count=0;
	for(i=0;i<n;i++){
		printf("array of [%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%3==0){
		
		count++;
		}
	}
	printf("count is %d",count);
}
