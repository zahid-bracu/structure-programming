#include <stdio.h>
int main()
{
    int array[5];
    int total;
    int sum=0;
    for(int i=1;i<=5;i++){
        printf("Enter %d no. subject mark \n",i);
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("Enter total marks? \n");
    scanf("%d",&total);
    printf("Full Mark : %d \n",total);
    printf("Total marks got:  %d \n",sum);
    float average=sum/5;
    printf("Average : %f \n",average);
    float percentage=(total*sum)/100;
    return 0;
}