#include<stdio.h>
int main(){
    int size, i;
    float Average;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the array elements: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
}   
int sum=0;
for(i=0; i<size; i++){
    sum=sum+arr[i];
}
 printf("Sum: %d\n", sum);
    Average=(float)sum/size;
    printf("Average: %f", Average);
}