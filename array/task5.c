//Write a C program to find the second largest element in an array.
#include <stdio.h>
int main(){
    
    int array[10]={111,22,334,44,166,1277,88,699,552,110};
    int max=array[0];
    int secondMax=array[0];
    int arraySize=sizeof(array)/sizeof(array[0]);
    
    for(int i=0;i<arraySize;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    
    for(int i=0;i<arraySize;i++){
        if(array[i]<max && array[i]>secondMax){
            secondMax=array[i];
        }
    }
    
    printf("2nd max Value %d\n",secondMax);
}