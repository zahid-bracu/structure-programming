#include <stdio.h>
#include <math.h> 
int main()
{
    float side; 
    printf("Enter side of the triangle: \n");
    scanf("%f",&side);
    float area = (sqrt(3) / 4) * (side * side);
    printf("%f",area);
    return 0;
}