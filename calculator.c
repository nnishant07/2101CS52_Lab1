#include <stdio.h>
void addition(long int no1,long int no2)
{
    printf("%ld", no1 + no2);
}

void subtraction(long int no1,long int no2)
{
    printf("%ld", no1 - no2);
}

void multiplication(long int no1,long int no2)
{
    printf("%ld", no1 * no2);
}

int main()
{

    printf("Enter number 1 for further operation :\n");
    long int no1;
    scanf("%ld", &no1);

    long int no2;
    printf("Enter number 2 for further operation :\n");
    scanf("%ld", &no2);


    printf("Enter code of the operation needed:\n 1. Add \t 2. Subtract \t 3. Multiply \n");
    int check;
    scanf("%d", &check);

    switch (check)
    {
    case 1:
        addition(no1, no2);
        break;
    case 2:
        subtraction(no1, no2);
        break;
    case 3:
        multiplication(no1, no2);
        break;
    }
}