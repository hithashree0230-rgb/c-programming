#include<stdio.h>
int main(){
    int a;
    printf("Enter the hour (0-23): ");
    scanf("%d", &a);
    if(a>=5 && a<=11)
    printf("Good morning!");
    else if(a>=12 && a<=15)
    printf("Good afternoon!");
    else if(a>=16 && a<=21)
    printf("Good evening!");
    else if(a>=22 && a<=23 || a<=4)
    printf("Good night!");
    else
    printf("Invalid hour!");
}