#include<stdio.h>
    int add(int a, int b){
    return a+b;
}
int main(){
    int a, b, sum=0;
    printf("Enter num1 and num2 : ");
    scanf("%d %d", &a, &b);
    sum=add(a,b);
    printf("Sum of two numbers is %d", sum);
}