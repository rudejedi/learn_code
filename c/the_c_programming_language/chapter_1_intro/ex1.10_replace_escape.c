#include <stdio.h>

/* copy input to output, replacing each tab \t, each backsapce by \b,
and each backslash by \\ */

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}