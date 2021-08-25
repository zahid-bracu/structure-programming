#include <stdio.h>
int main(){
    float temp;
    printf("Enter Fahrenheit Value \n");
    scanf("%f",&temp);
    float celsius=(temp-32)/1.8;
    printf("%f",celsius);
    return 0;
}