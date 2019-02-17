int mySqrt(int x) {
    long long int i=0;
    
    while(true){
        if(x>=i*i && x<(i+1)*(i+1)){
            return i;
        }
        i++;
    }
}