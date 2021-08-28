#include <stdio.h>
int main() {
    float length;
    printf("Please Enter The Length in Meter \n");
    scanf("%f",&length);
    float meter=length/100;
    float kilometer=meter/1000;
    printf("Length in meter is : %f \n" ,meter);
    printf("Length in kilometer is : %f \n" ,kilometer);
   
    return 0;
}