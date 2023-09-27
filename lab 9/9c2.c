#include <stdio.h>  
  
void main()  
{  
    int n, bin = 0,rem=0,place = 1;  
  
    printf("Enter a decimal number\n");  
    scanf("%d", &n);  
  
    printf("\nBinary = ",n);  
    while(n)  
    {
         rem = n%2;
        n   = n / 2; 
        bin   = bin + (rem * (place));  
        
        place = place * 10;  
    }  
    
    while(bin!=0)
    {
        if(bin%2==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        bin/=10;
    }
  
    
}  
