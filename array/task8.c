//Write a C program to copy all elements from an array to another array.
#include <stdio.h>
int main(){
    int array[]={11,-22,33,44,-55,-66,77,88,-99,110};
    int arraySize=sizeof(array)/sizeof(array[0]);
    int copyArray[arraySize];
    
    for(int i=0;i<arraySize;i++){
        copyArray[i]=array[i];
    }
    for(int i=0;i<arraySize;i++){
        printf("%d\n",copyArray[i]);
    }
    
    
 
}