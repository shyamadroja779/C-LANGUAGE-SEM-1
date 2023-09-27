#include<stdio.h>
void main()
{
    int i,n,ans=1;
    printf("Enter a number for finding it's factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ans = ans*i;
    }
    printf("Factorial = %d",ans);
}
