// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a;
    int b;
    int c;
    
    printf("Enter the first number \n");
    scanf("%d",&a);
    
    printf("Enter the second number \n");
    scanf("%d",&b);
    
    printf("Enter the third number \n");
    scanf("%d",&c);
    
    if(a>b){
        if(a>c){
            printf("%d",a);
        }else{
            printf("%d",c);
        }
    }else{
        if(b>c){
            printf("%d",b);
        }else{
            printf("%d",c);
        }
    }
    
    
    return 0;
}