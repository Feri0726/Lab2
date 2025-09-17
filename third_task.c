#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{
    // declare variables
    float x1, x2, a, b, c, d;
    printf("Give the equation: a, b, c");
    scanf("%f%f%f", &a, &b, &c);
    d = b*b-4*a*c;
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);
    printf("first solution: %f, second solution: %f ", x1, x2);
    // get user input

    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */

    // according to the value of the discriminant, calculate the roots and print the results

    return 0;
}