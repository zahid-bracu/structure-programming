#include <stdio.h>
int main(){
    int sideOne, sideTwo, sideThree;


    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &sideOne, &sideTwo, &sideThree);

    if(sideOne==sideTwo && sideTwo==sideThree) 
    {
        /* If all sides are equal */
        printf("Equilateral triangle.");
    }
    else if(sideOne==sideTwo || sideOne==sideThree || sideTwo==sideThree) 
    {
        /* If any two sides are equal */
        printf("Isosceles triangle.");
    }
    else 
    {
        /* If none sides are equal */
        printf("Scalene triangle.");
    }

    return 0;
} 