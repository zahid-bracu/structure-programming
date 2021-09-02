#include <stdio.h>
int main()
{
    float principle;
    float time;
    float rate;
    printf("Enter principle Value \n");
    scanf("%f", &principle);
    printf("Enter Totoal Time \n");
    scanf("%f", &time);
    printf("Enter rate \n");
    scanf("%f", &rate);
    float simpleInterest = (principle * time * rate) / 100;
    printf("Simple Interest : %f ", simpleInterest);
    return 0;
}