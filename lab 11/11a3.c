#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("Multiplication table : \n");
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,n,i*n);
    }
    
}
