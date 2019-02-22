int maxProfit(int* prices, int pricesSize) {
    if(pricesSize==0){
        return 0;
    }
    int max=0, minprice=prices[0], p;
    for(int i=0; i<pricesSize; i++){
        if(minprice>prices[i]){
            minprice = prices[i];
        }
        p = prices[i]-minprice;
        if(p>max){
            max = p;
        }
    }
    return max;
}