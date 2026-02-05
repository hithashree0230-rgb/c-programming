#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Three numbers : ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c)
    {
      if(b>c)
    printf("The middle number is:%d",b);
    else
    printf("The middle number is:%d",c);
}
else if(b>a && b>c)
{
    if(c>a)
     printf("The middle number is:%d",c);
     else
     printf("The middle number is:%d",a);
}
else if(c>a && c>b)
{
    if(a>b)
     printf("The middle number is:%d",a);
     else
     printf("The middle number is:%d",b);
}
}




