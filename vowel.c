#include<stdio.h>

void main(){
    char ch;
    printf("enter the alphabat=");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'A' || ch  == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'u' || ch == 'U' || ch == 'o' || ch == 'O' )
    {
        printf("the char %c is a vowel",ch);
 }
 else{
    printf("the char %c is a constasnt",ch);
 }
}