#include<stdio.h>
int main(){
    int m,n;
    
    //printf("Enter n:");
    scanf("%d", &n);
    //printf("Enter m:");
    scanf("%d",&m);
    int side=(n-m)/2;
    for(int i=0; i<side; i++){
        printf("$");
    }
    for(int i=0; i<m; i++){
        printf("*");
    }
    for(int i=0; i<side; i++){
        printf("$");
    }
    return 0;
}