#include<stdio.h>
int main(){
    int arr[5],i;
    int *ptr=&arr[5];
    for(i=1; i<=5; i++){
        *ptr=i*10;
        printf("%d ", *ptr);
}
}