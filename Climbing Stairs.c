int climbStairs(int n) {
    int a=1, b=2, c;
    if(n==1){
        return a;
    }else if(n==2){
        return b;
    }else{
        for(int i=2; i<n; i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
}