#include <stdio.h>

/* program to count blanks, tabs and new line in user input*/

int main()
{
    int c, nb, nt, nl;
    nb = 0, nt = 0, nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++nb;
        }
        if (c == '\t')
        {
            ++nt;
        }
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("No. of blanks: %d\n", nb);
    printf("No. of tabs: %d\n", nt);
    printf("No. of new lines: %d\n", nl);
}
