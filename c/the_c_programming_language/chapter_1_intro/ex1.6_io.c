#include <stdio.h>

/* verify getchar()!=EOF is 0 or 1*/

int main()
{
    int c;
    c = (getchar() != EOF);
    printf("The expression 'getchar ()! = EOF' is:%d\n'", c);
    /*the comparison != results in a boolean expression, where the result is 1 (true) if the condition is satisfied and 0 (false) otherwise.*/
}