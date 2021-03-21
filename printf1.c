#include <stdio.h>

int main(void)
{
    int zeichen;
    zeichen = printf("Hello world");
    printf(" enthält %d Zeichen.\n", zeichen);
    return 0;
}