#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    printf("%d %d %d\n", arr[0], arr[1],arr[4]);
     arr[3]=99;
     printf("%d", arr[3]);
     return 0;
}