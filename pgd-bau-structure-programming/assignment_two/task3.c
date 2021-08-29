#include <stdio.h>
float getArea(float length, float breadth){
    float area=length*breadth;
    return area;
}
int main() {
    float length;
    float breadth;
    
    printf("Please Enter the length \n");
    scanf("%f",&length);
    
    printf("Please Enter the breadth price \n");
    scanf("%f",&breadth);
    
    float area=getArea(length,breadth);
    printf("Area is : %f" , area);
    
    return 0;
}