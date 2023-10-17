#include<stdio.h>
void main()
{
	int n ;
	printf("lENGTH OF ARRAY:");
	scanf("%d",&n);
	int i,a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("b[%d]=%d\n",i,b[i]);
	}
}
