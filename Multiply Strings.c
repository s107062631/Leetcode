char* multiply(char* num1, char* num2) {
    char *arr;
    int  *tmparr;
    int len1=strlen(num1), len2=strlen(num2), carry=0;
    arr = (char*)malloc(sizeof(char)*(len1+len2+1));
    tmparr = (int*)malloc(sizeof(int)*(len1+len2-1));
    
    if(num1[0]=='0' || num2[0]=='0'){
        arr[0] = '0';
        arr[1] = '\0';
        return arr;
    }
    
    for(int i=0; i<(len1+len2-1); i++){
        tmparr[i] = 0;
    }
    
    for(int i=0; i<len1; i++){
        for(int j=0; j<len2; j++){
            tmparr[i+j] = tmparr[i+j] + (num2[j]-'0')*(num1[i]-'0');
        }
    }
    
    arr[len1+len2] = '\0';
    for(int i=len1+len2-2; i>=0; i--){
        arr[i+1] = (tmparr[i]+carry)%10 + '0';
        carry = (tmparr[i]+carry)/10;
    }    
    if(carry!=0){
        arr[0] = '0' + carry;
    }else{
        for(int i=0; i<(len1+len2); i++){
            arr[i] = arr[i+1];
        }  
    }
    return arr;
}