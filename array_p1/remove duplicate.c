#include<stdio.h>
int main(){
    int size,i,k=0,j;
    //printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    //printf("Enter array elements: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int unique[j];
    int found=0;
    for(i=0;i<size;i++){
        found=0;
    
    for(int j=0; j<k;j++){
        if(arr[i]==unique[j])
        {
            found=1;
             break; 
        }
    }
    if(!found)
    {
        unique[k]=arr[i];
        k++;
    }
}
printf("Unique array elements: ");
for(i=0; i<k; i++)
    printf("%d ", unique[i]);
}



    