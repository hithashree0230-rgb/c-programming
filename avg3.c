#include<stdio.h>
int main(){
    float a,b,c, average;
    printf("Enter the values: ");
    scanf("%f %f %f", &a, &b, &c);
    average=((a+b+c)/3);
    printf("avearge=%f", average);
}