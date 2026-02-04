#include<stdio.h>
int main(){
    int a;
    printf("Enter the score:");
    scanf("%d", &a);
    if(a>=90 && a<=100)
    printf("Your grade is A");
    else if(a>=80 && a<=89)
    printf("Your grade is B");
    else if(a>=70 && a<=79)
    printf("Your grade is C");
    else if(a>=60 && a<=69)
    printf("Your grade is D");
    else
    printf("Your grade is F");
    
    
}