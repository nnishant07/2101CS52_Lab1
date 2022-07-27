#include <stdio.h>
void addition(long int no1,long int no2)
{
    printf("%ld", no1 + no2);
}
void subtraction(long int no1,long int no2)
{
    printf("%ld", no1 - no2);
}

int main()
{
    printf("Enter number 1 :\n");
    long int t;
    scanf("%ld", &t);
    long int r;
    printf("Enter number 2 :\n");
    scanf("%ld", &r);
    printf("Enter code of the operation needed:\n 1. Add \t 2. Subtract");
    int n;
    scanf("%d", &n);
    switch 👎
    {
    case 1:
        addition(t, r);
        break;
    case 2:
        subtraction(t, r);
        break;
    
    }
}