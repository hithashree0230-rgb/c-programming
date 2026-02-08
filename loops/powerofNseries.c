#include<stdio.h>
int main(){
    int power=1;
    
    int b=1, n=0;
    printf("Enter the base value: ");
    scanf("%d",&b);
    printf("Enter the exponential value: ");
    scanf("%d", &n);
  for(int i=0;i<=n;i++){
      printf("%d ", power);
      power=power*b;
  }
}