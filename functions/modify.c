#include<stdio.h>
int modify(int a){
    int result=0;
    result=a+5;
        printf("After modifying, num is %d",result);
    }
    int main(){
        int a, result=0;
        printf("Enter a number: ");
        scanf("%d", &a);
        result=modify(a);
        
    }
