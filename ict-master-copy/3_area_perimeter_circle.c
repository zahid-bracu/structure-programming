#include <stdio.h>
int main(){
    float radius;
    printf("Enter Radius Value \n");
    scanf("%f",&radius);
    float area=3.1416*radius*radius;
    float perimeter=2*3.1416*radius;
    printf("Perimeter %f \n",perimeter);
    printf("Area %f \n",area);
    return 0;
}