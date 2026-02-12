#include <stdio.h>

int is_prime(int);



int main()
{
    int limit;
    void generate_prime(int);
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}