#include<stdio.h>
int main(){
    int n=0;
    int power=1;
   //printf("Enter the number: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Error: Number should be an positive number.");
    }else{
        for(int i=1;i<=n;i++){
            printf("%d ",power);
            power=power*2;
            
        }
    }
    return 0;
}