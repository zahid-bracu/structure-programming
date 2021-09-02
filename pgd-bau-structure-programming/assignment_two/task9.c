#include <stdio.h> 
int main()
{
    float days;
    printf("Enter total days \n");
    scanf("%f",&days);
    float years = days/365; 
    float weeks = days/7;
    printf("Years: %f\n", years);
    printf("Weeks: %f\n", weeks);
    return 0;
}
