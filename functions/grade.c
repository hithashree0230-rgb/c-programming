#include<stdio.h>

float average(int a, int b, int c){
 return (float)(a+ b+c)/3.0;
}
int main(){
    int a,b,c;
    //printf("Enter3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    float result=average(a,b,c);
    if(result==(int)result)
    printf("Average is %d\n", (int)result);
    else
    printf("Average is %.4f\n", result);
    return 0;
}