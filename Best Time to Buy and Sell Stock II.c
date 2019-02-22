int maxProfit(int* prices, int pricesSize) {
    if(pricesSize==0){
        return 0;
    }
    int maxprofit=0, minprice=prices[0];
    for(int i=1; i<pricesSize; i++){
        if(prices[i-1]>prices[i]){
            maxprofit = prices[i-1] - minprice + maxprofit;
            minprice = prices[i];
        }
    }
    maxprofit = maxprofit + prices[pricesSize-1] - minprice;
    return maxprofit;
}