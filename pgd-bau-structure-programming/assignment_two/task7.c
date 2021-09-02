#include <stdio.h>

int main() {
    float celsius;
    printf("Enter the temperature in celsius");
    scanf("%f",&celsius);
    
    float fahrenheit=1.8*celsius+32;
    printf("%f",fahrenheit);
    
    return 0;
}