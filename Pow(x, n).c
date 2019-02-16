/*double myPow(double x, int n) {
    return pow(x,n);
}*/
double mypow2(int n, double x){
    if(n==1 || n==-1){
        return x;
    }else{
        if(n%2==0){
           return mypow2(n/2, x) *  mypow2(n/2, x);
        }else{
           return mypow2(n/2, x) *  mypow2(n/2, x) * x;
        }
    }
}

double myPow(double x, int n) {
    double a=1;
    
    if(n==0 || x==1){
        return 1;
    }else if(n<0){
        x = 1/x;
    }
    
    return mypow2(n, x);
}