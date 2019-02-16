int romanToInt(char* s) {
    int stack[15];
    int i=0, k=0;
    
    while(s[i]!='\0'){
        switch(s[i]){
            case 'I':
                stack[i++] = 1;
                break;
            case 'V':
                stack[i++] = 5;
                break;
            case 'X':
                stack[i++] = 10;
                break;
            case 'L':
                stack[i++] = 50;
                break;
            case 'C':
                stack[i++] = 100;
                break;
            case 'D':
                stack[i++] = 500;
                break;
            case 'M':
                stack[i++] = 1000;
                break;
        }
    }
    
    for(int j=1; j<i; j++){
        if(stack[k]>=stack[j]){
            stack[++k] = stack[j];
        }else{
            stack[k] = stack[j]-stack[k];
        }
    }
    for(int j=1; j<=k; j++){
        stack[0] = stack[j] + stack[0];
    }
    return stack[0];
}