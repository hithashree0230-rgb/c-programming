#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    //printf("Fibonacci series is ");
    while(a<=n){
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
    if(n<0){
    printf("Invalid input");
    }
    return 0;
}