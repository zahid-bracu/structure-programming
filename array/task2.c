//02. Write a C program to print all negative elements in an array.

#include <stdio.h>
int main(){
    int array[10]={-11,22,-33,44,-55,66,-77,88,-99,110};
    int arraySize=sizeof(array)/sizeof(array[0]);
    printf("The Array is being printed\n");
    for(int i=0;i<arraySize;i++){
        if(array[i]<0)
            printf("%d\n",array[i]);
    }
}