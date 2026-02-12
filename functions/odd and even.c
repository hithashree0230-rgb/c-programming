#include<stdio.h>
int num(int a){
    int result=0;
    if(a%2==0){
        printf("%d is even",a);
       } else{
        printf("%d is odd",a);
    }
    return result;
}
int main(){
    int a,result=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    result=num(a);
    
}