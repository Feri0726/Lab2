#include <stdio.h>
int main(){


    int y;
    printf("Give the length:");
    scanf("%d", &y);
    printf("+");
    for (int i = 0; i < y; i++){
        printf("-");}
    printf("+");
    return 0;
}