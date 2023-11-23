#include <stdio.h>

/* print input one word per line */
/* TODO: fix for spaces in last and first character*/

int main()
{
    int c, state;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}