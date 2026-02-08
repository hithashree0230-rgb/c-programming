#include<stdio.h>
int main(){
    int num,rev=0;
    scanf("%d", &num);
    if(num>=0){
        while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
        }
        printf("%d",rev);
    }else{
        printf("Please enter a positive integer");
    }
}
