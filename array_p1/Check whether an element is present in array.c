#include<stdio.h>
int main(){
    int size,i;
    printf("Enter array size: ");
     scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for (i=0; i<size; i++)
    {
   
        scanf("%d", &arr[i]);
    }
    int ele;
        printf("Enter the elements to search: ");
    scanf("%d", &ele);

    for(i=0;i<size; i++){
        if(ele==arr[i])
        {
        printf("Element Found");
        break;
        }
    }
    if(ele!=arr[i])
    {
        printf("Not Found");
    }
}
    
    



