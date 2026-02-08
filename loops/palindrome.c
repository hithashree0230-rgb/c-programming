#include<stdio.h>
int main(){
    int n,original,rev=0;
    int digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    original=n;
   
        while(n>0){
            
            digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
             if(original==rev)
        
            printf("The Entered number is an palindrome.");
        
            else
            printf("The Entered number is not an palindrome.");
        return 0;
}

