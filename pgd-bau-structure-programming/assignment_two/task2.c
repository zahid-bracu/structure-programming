#include <stdio.h>
int getProfit(int sellingPrice, int buyingPrice){
    int profit=sellingPrice-buyingPrice;
    return profit;
}
int main() {
    int sellingPrice;
    int buyingPrice;
    
    printf("Please Enter the selling price \n");
    scanf("%d",&sellingPrice);
    
    printf("Please Enter the buying price \n");
    scanf("%d",&buyingPrice);
    
    int profit=getProfit(sellingPrice,buyingPrice);
    printf("Profit is : %d" , profit);
    
    return 0;
}