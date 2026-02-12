#include<stdio.h>
float convert(int fahrenheit)
{
    float celsius;
 celsius=(fahrenheit-32)*5.0/9.0;
 return celsius;
}
int main(){
    int fahrenheit;
    float celsius;
    printf("Enter fahrenheit: ");
    scanf("%d", &fahrenheit);
    celsius=convert(fahrenheit);
    printf("celsius is: %f", celsius);
}
