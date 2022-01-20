//Write a C program to sort array elements in ascending or descending order.
#include <stdio.h>
int main(){
    int array[]={11,22,4,23,5,9,6,13,10,16};
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        for(int j=i+1;j<sizeof(array)/sizeof(array[0]);j++){

            if(array[j]<array[i]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        printf("%d \n",array[i]);
    }
}
