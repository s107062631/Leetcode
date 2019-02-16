bool isValid(char* s) {
    int len=strlen(s), i=0, j=0, flag=1;
    char stack[4000];
    
    while(j<len && flag){
        switch(s[j]){
            case '(':
                stack[i++] = s[j];
                break;
            case '{':
                stack[i++] = s[j];
                break;
            case '[':
                stack[i++] = s[j];
                break;
            case ')':
                if(i==0 || stack[i-1]!='('){
                    flag = 0;
                }else{
                    i--;
                }
                break;
            case '}':
                if(i==0 || stack[i-1]!='{'){
                    flag = 0;
                }else{
                    i--;
                }
                break;
            case ']':
                if(i==0 || stack[i-1]!='['){
                    flag = 0;
                }else{
                    i--;
                }
                break;
        }
        j++;
    }
    if(flag && i==0){
        return true;
    }else{
        return false;
    }
}