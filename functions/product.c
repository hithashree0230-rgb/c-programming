#include<stdio.h>
int product(int a, int b)
{
int result=0;

    for(int i=0;i<b; i++){
        result=result+a;
    }
    return result;
}

int main(){
    int a,b, result;
   // printf("Enter num1 and num2 : ");
    scanf("%d %d", &a, &b);
    result=product(a,b);
printf("%d", result);
}

