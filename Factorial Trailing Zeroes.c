int trailingZeroes(int n) {
    long long int e=1, p=0, k=5;
    
    while(n>=k){
        p = n/k + p;
        k = k*5;
    }
    return p;
}