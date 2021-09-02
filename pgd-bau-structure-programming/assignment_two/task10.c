#include <math.h>
#include <stdio.h>
int main() {
    int base;
    int exp;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
    int powResult = pow(base, exp);
    printf("Power Result %d",powResult);
    return 0;
}