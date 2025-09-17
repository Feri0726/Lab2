#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables<-- These are comments, you can remove them if you want to
    float x1,x2, y1, y2;
    printf("Give the coordinates");
    scanf("%f%f%f%f", &x1, &x2,&y1,&y2);
    float len = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%f", len);
    // calculate the length

    // print the result

    return 0;
}