#include<stdio.h>
int main(){
    int a,b;int result=0;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
   for(int i=1; i<=b;i++){
       result=result+a;
   }
   printf("The Result is %d", result);
   return 0;
}