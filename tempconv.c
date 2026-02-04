#include<stdio.h>
int main(){
    float celsius, fahrenheit;
    
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5.0/9.0;
    printf("celsius=%6f", celsius);
}