#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input*/

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc; // number of characters
        if (c == '\n')
        {
            ++nl; // number of lines
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw; // number of words
        }
    }
    printf("Number of lines:%d\n", nl);
    printf("Number of words:%d\n", nw);
    printf("Number of characters:%d\n", nc);

    return 0;
}