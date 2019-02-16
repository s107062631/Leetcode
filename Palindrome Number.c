bool isPalindrome(int x) {
    int arr[40], i=0;
    
    if(x < 0){
        return false;
    }else if(x>=0 && x<10){
        return true;
    }else{
        while(x != 0){
            arr[i++] = x%10;
            x = x/10;
        }
        for(int j=0; j<=i/2+1; j++, i--){
            if(arr[j]!=arr[i-1]){
                return false;
            }
        }
    }
    return true;
}