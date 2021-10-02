//04. Write a C program to find maximum and minimum elements in an array. 
#include <stdio.h>
int main(){
    
    int array[10]={111,22,334,44,552,166,177,88,699,110};
    int max=array[0];
    int min=array[0];
    int arraySize=sizeof(array)/sizeof(array[0]);
    
    for(int i=0;i<arraySize;i++){
        if(array[i]>max)
            max=array[i];
        else if(array[i]<min)
            min=array[i];
    }
    printf("Max Value %d\n",max);
    printf("Min Value %d\n",min);
}