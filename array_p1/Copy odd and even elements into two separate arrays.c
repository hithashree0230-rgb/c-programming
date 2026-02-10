#include<stdio.h>
int main(){
    int size,i;
    //printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    //printf("Enter array elements: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int even_array[size];
    int odd_array[size];
    int e=0, o=0;
    for(i=0; i<size; i++){
        if(arr[i]%2==0)
        {
            even_array[e]=arr[i];
            e++;
        }
        else
        {
            odd_array[o]=arr[i];
            o++;
        }
    }
   
    
    printf(" Odd array elements: ");
    for(i=0; i<o; i++)
    printf("%d ", odd_array[i]);
     printf("\nEven array elements: ");
    for(i=0; i<e; i++)
    printf("%d ", even_array[i]);
    
    return 0;
}
