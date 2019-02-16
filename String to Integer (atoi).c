int myAtoi(char* str) {
    long long int a=0;
    int flag=0, i=0, sign=1;
    while(true){
        if(str[i]==' '){
            if(flag){
                break;
            }
        }else if(str[i]<='9' && str[i]>='0'){
            flag = 1;
            if(a >= 2147483648){
                break;
            }
            a = a*10 + str[i] - '0';
        }else if(str[i]=='-'){
            if(flag){
                break;
            }
            sign = -1;
            flag = 1;
        }else if(str[i]=='+'){
            if(flag){
                break;
            }
            sign = 1;
            flag = 1;
        }else{
            break;
        }
        i++;
    }
    if(a>=2147483648){
        if(sign==-1){
            return -2147483648;
        }else{
            return 2147483647;
        }
    }
    return a * sign;
}