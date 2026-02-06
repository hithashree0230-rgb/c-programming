#include<stdio.h>
int main(){
    int number1, number2;
    int Var;
    char op;
  
    scanf("%d %c %d", &number1,&op, &number2);
    switch(op)
    {
        case  '+':
        printf("%d", number1+number2);
        break;
         case  '-':
        printf("%d",number1-number2);
        break;
         case  '*':
        printf("%d",number1*number2);
        break;
         case  '/':
        printf("%d ",number1/number2);
        break;
        default:
        printf("Invalid operation!\n");
    
    }
}