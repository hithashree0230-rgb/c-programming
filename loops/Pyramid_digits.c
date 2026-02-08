#include<stdio.h>
int main(){
    int n;
    int count;
   // printf("Enter the number:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        count=n-i;
    
        for(int k=1; k<=i; k++){
            printf("%d ", ++count);
            
            
        }
        printf("\n");
    }
        for(int i=n-1; i>=1; i--)
        {
        count=n-i;
        
        for(int k=1; k<=i; k++)
        {
            printf("%d ", ++count);
            
        }
        printf("\n");
    }
    return 0;
}