//03. Write a C program to find the sum of all array elements.
#include <stdio.h>
int main(){
    int sum=0;
    int array[10]={11,22,33,44,55,66,77,88,99,110};
    int arraySize=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<arraySize;i++){
        sum+=array[i];
    }
    printf("The sum is %d\n",sum);
}