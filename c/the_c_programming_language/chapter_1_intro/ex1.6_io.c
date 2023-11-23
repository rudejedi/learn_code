#include <stdio.h>

/* verify getchar()!=EOF is 0 or 1*/

int main()
{
    int c;
    while (c = getchar() != EOF)
    {
        putchar(c);
    }
}