#include <stdio.h>
int main() {
    float fahrenheit;
    printf("Enter the temperature in fahrenheit \n");
    scanf("%f",&fahrenheit);
    
    float celsius=(fahrenheit-32)/1.8;
    printf("%f",celsius);
    
    return 0;
}