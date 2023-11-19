#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.0;   /* lower limit of temperature table */
    upper = 120.0; /* upper limit */
    step = 5.5;    /* step size */

    fahr = lower;
    printf("Celsius-Fahrenheit Table: \n");
    printf("----------------------------- \n");
    printf("Celsius \t Fahrenheit\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0) / 5 + 32.0;
        printf("%5.1f  %14.1f \n", celsius, fahr); /* 5 spaces for celsius, 5+5+4(1 tab in line 18) spaces for fahr*/
        celsius = celsius + step;
    }
}