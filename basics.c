#include<stdio.h>
int main(){
    int pincode;
    char name_letter;
    float height;
    double latitude,longitude;
    scanf("%c", &name_letter);
    scanf("%d", &pincode);
    scanf("%f", &height);
    scanf("%lf %lf",&latitude,&longitude);
    printf("Here is what you have entered:\n");
    printf("First letter in name: %c \n",name_letter);
    printf("Pincode: %d\n",pincode);
    printf("Height: %f\n",height);
    printf("Location: %lf %lf\n",latitude,longitude);
}
