#include<stdio.h>
void main()
{
	int n,x,y,count=0;
	printf("Enter the vallue of ARRAY:");
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
	printf("ENTER THE NUBER TO SEARCH:");
	scanf("%d",&x);
    for(i=0;i<n;i++)
	{
	if(a[i]==x)
		{
			
			printf("pos of element in arr is %d\n",i);
		}
		else
		{
			count++;
		}
    }
    if(count==n)
    {
    	printf("there is  no such element");
    }
    
}




	
