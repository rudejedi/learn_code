#include <stdio.h>

/* count characters in input; 1st version*/

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("Character count in input is %ld\n", nc);
    return 0;
}