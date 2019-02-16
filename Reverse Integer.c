int reverse(int x) {
    long long int reverse=0, max=pow(2,31)-1;
    int flag;    
    
    if(x < 0){
        flag = 1;
    }else{
        flag = 0;
    }
    
    while(x != 0){
        reverse = x%10 + reverse*10;
        x = x/10;
    }
    
    if(flag){
        if(reverse < -1*max){
            return 0;
        }else{
            return reverse;
        }
    }else{
        if(reverse > max-1){
            return 0;
        }else{
            return reverse;
        }
    }
}