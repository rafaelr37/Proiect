#include <stdio.h> 

int main(void)
{
    int nr, rom;

    printf("Introdu o valoare: ");
    scanf("%d", &nr);

    printf("In cifre romane: : ");

    while (nr != 0)
    {
        if (num >= 1000) 
        {
            printf("M");
            nr -= 1000;
        }
        else if (num >= 900)
        {
            printf("CM");
            nr -= 9000;
        }
        else if (num >= 500)
        {
            printf("D");
            nr -= 500;
        }
        else if (num >= 400)
        {
            printf("CD");
            nr -= 400;
        }
        else if (num >= 100)
        {
            printf("C");
            nr -= 100;
        }
        else if (num >= 90)
        {
            printf("XC");
            nr -= 90;
        }
        else if (num >= 50)
        {
            printf("L");
            nr -= 50;
        }


    }

    return 0;
}