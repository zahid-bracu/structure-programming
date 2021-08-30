#include <stdio.h>
int main() {
    float radius;
    printf("Please Enter The Radius \n");
    scanf("%f",&radius);
    float diameter=radius*2;
    float circumference=3.1416*diameter;
    float area=3.1416*(radius*radius);
    printf("Diameter is : %f \n" , diameter);
    printf("Area is : %f \n" , area);
    printf("Circumference is : %f \n" , circumference);
    return 0;
}