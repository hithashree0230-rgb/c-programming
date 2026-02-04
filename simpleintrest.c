#include<stdio.h>
int main(){
    float simple_interest,principle_amount;
    int rate_of_interest,t;

    scanf("%f", &principle_amount);
    
    scanf("%d", &rate_of_interest);
    
    scanf("%d", &t);
   simple_interest=(principle_amount*rate_of_interest*t)/100;
    printf("%g",simple_interest);
}