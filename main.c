#include <stdio.h>
 
void main()
{
    int angka = 1;
    int angka2 = 1;

    for(int a = 0; a < 7; a++){
        printf("* ");
    }

    printf("\n");
 
    for (int i = 1; i <= 5; i++)
    {
 
        printf("%d ", angka);
        angka++;

        for (int k = 1; k < i; k++)
            printf(" ");
 
        for (int j = i; j <= 5; j++)
            printf("* ");
 
        for (int l = 1; l < i; l++)
        {
            printf(" ");
        }
 
        printf("%d ", angka2);
        angka2++;

        printf("\n");
    }
 
    for (int i = 5 - 1; i >= 1; i--)
    {
 
        printf("%d ", angka);
        angka++;
 
        for (int k = 1; k < i; k++)
            printf(" ");
 
        for (int j = i; j <= 5; j++)
            printf("* ");
 
        for (int l = 1; l < i; l++)
        {
            printf(" ");
        }
 
        printf("%d", angka2);
        angka2++;

        printf("\n");
    }

    for(int a = 0; a < 7; a++){
        printf("* ");
    }
 
}