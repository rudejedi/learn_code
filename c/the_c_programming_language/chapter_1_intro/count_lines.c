#include <stdio.h>

/* count lines in input*/

int main()
{
    long c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("Line count in input is %ld\n", nl);
}