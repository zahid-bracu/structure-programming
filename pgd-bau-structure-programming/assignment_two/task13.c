#include <stdio.h>
int main()
{
    float base;
    float height;
    printf("Enter base of the triangle: \n");
    scanf("%f", &base);
    printf("Enter height of the triangle: \n");
    scanf("%f", &height);
    float area = (base * height) / 2;
    printf("Area %f", area);
    return 0;
}