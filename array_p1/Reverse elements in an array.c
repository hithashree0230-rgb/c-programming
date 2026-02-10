#include<stdio.h>
int main(){
    int size,i,temp;
    printf("Enter array size: ");
    scanf("%d", &size);
    
     int arr[size];
     
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
        scanf("%d ",&arr[i]);
    
    printf("Elements before reversing:\n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
    
    
    for(i=0; i<size/2; i++){
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    printf("\nElements after reversing:\n");
    for(i=0;i<size; i++){
    printf("%d ", arr[i]);
    }
    
    return 0;
}
   
   