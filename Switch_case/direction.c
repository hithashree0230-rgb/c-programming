#include<stdio.h>
int main(){
    char direction;
    printf("Enter direction: ");
    scanf("%c", &direction);
    switch(direction){
    case 'W':
    case 'w':
    printf("West");
    break;
     case 's':
    case 'S':
    printf("South");
    break;
     case 'E':
    case 'e':
    printf("East");
    break;
     case 'n':
    case 'N':
    printf("North");
    break;
    default:
    printf("Invalid input");
    break;
}
}
    
    
