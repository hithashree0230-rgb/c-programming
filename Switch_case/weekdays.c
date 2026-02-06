#include<stdio.h>
int main()
{
    int s,n,d,r;
    scanf("%d %d",&n,&s);
    if(n<1 || n>365)
    {
        printf("Error: Invalid Input, n value should be > 0 and <=365\n");
        return 0;
    }
    if(s<1 || s>7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7");
        return 0;
    }
    d=(n+s-1)%7;
    if(d==0)
    {
        d=7;
    }
    switch(d)
    {
        case 1: printf("The day is Sunday");
        break;
        case 2: printf("The day is Monday");
        break;
        case 3: printf("The day is Tueday");
        break;
        case 4: printf("The day is Wednesday");
        break;
        case 5: printf("The day is Thursday");
        break;
        case 6: printf("The day is Friday");
        break;
        case 7: printf("The day is Saturday");
        break;
    }
}