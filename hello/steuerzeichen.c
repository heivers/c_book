#include <stdio.h>

int main(void)
{
    printf("Ein akustisches Signal mit (\\a) \a");
    printf("\nEine Backspace mit : (\\b) \bx\n");
    printf("Einen Tab mit: (\\t) \tx\n");
    printf("\tC\n\ti\n\ts\n\tt\n\ttoll\n");
    printf("\t  u\n\t  n\n\t  d\n");
    printf("\tmacht Spaß\n");
    //Newline
    printf("Darstellung von Newline (\\n)\n");
    printf("Mögliche Ausführung von Newline \n");
    printf("Mit hexadecimaler Angabe: \\xa \xa");
    printf("Mit oktaler Wertangabe: \\012 \012");
    printf("Mit decimaler Angabe: \\10%c", 10);
    printf("Hallo\0 ich bin nicht mehr lesbar\n");
    return 0;
}   