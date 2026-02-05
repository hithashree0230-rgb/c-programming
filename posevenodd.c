#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if(a==0)
    {
        printf("The number is zero.",a);
    }
      else if(a>0)
      {
          if(a%2==0)
        printf("The number %d is positive and even.",a);
        else
        printf("The number %d is positive and odd.",a);
        
    }
    else
    {
    if(a%2==0)
    printf("The number %d is negative and even.",a);
    else
    printf("The number %d is negative and odd.",a);
    }}

