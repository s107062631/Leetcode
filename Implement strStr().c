int strStr(char* haystack, char* needle) {
    int t, flag;
    if(strlen(needle)==0){
        return 0;
    }
    
    for(int i=0; i<strlen(haystack); i++){
        if(haystack[i]==needle[0]){
            t = 0;
            while(needle[t]!='\0' && haystack[i+t]==needle[t]){
                t++;
            }
            if(t==strlen(needle)){
                return i;
            }
        }
    }
    return -1;
}