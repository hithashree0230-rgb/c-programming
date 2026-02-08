#include<stdio.h>
int main(){
    int N, GP, R,AP;
    float sum, HP;
   //printf("Enter the First Number 'A':");
    scanf("%d", &AP);
    //printf("Enter the Common Difference / Ratio 'R':");
    scanf("%d", &R);
    //printf("Enter the number of terms 'N':");
    scanf("%d", &N);
    if(N>0){
    GP=AP;
    sum=AP;
    printf("AP=");
    for(int i=0; i<N; i++){
        printf("%d,", AP);
        AP=AP+R;
    }
    printf("\nGP=");
   for(int k=0; k<N; k++){
       
       printf("%d, ", GP);
       GP=GP*R;
   } printf("\nHP=");
   for(int j=0; j<N; j++){
       
       HP=1/sum;
       printf("%f,",HP);
       sum+=(float)R;
       
   }
   printf("\n");
    }
    else{
        printf("Invalid input");
    }
    
   return 0;
   }