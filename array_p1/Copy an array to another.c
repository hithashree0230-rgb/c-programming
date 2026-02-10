#include<stdio.h>
int main(){
    int size,i;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr1[size];
    int arr2[size];
    printf("Enter array elements:");
    for(i=0; i<size; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Array1 elements: ");
    for(i=0; i<size; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Array2 elements: ");
    for(i=0; i<size; i++){
        arr2[i]=arr1[i];
        printf("%d ", arr1[i]);
    }
    return 0;
}