#include <stdio.h>

int main(void)
{
    int a, b, check;
    printf("bitte 2 Zahlen eingeben: ");
    check = scanf("%d" "%d", &a, &b);
    getchar();
    if (check == 2)
    {
        printf("Beide Zahlen richtig %d %d\n", a, b);
    }
    else if (check == 1)
    {
        printf("Die zweite Zahl hat das falsche Format!!\n");
        check = scanf("%d", &b);
        getchar();
        if (check)
        {
            printf("Eingabe ok. Ihre Zahlen %d %d\n", a, b);
        }
        else
        {
            printf("Leider nochmal falsch");
        }
    }
    else
    {
        printf("Die erste oder zweite Eingabe war incorrect\n");

    }
    return 0;
    
}