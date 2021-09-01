// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int A=0;
    int B=1;
    int sum=0;
    int n;
    printf("Enter the n value \n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        printf("%d \n",A);
        int C=A+B;
        A=B;
        B=C;
    }

    return 0;
}