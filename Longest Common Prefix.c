char* longestCommonPrefix(char** strs, int strsSize) {
    char *s;
    int j=0, len;
    
    if(strsSize==0){
        return "";
    }
    
    len=strlen(strs[0]);
    if(len == 0){
        return "";
    }
    
    s = strs[0];
    
    while(j<len){
        for(int i=0; i<strsSize; i++){
            if(s[j]!=strs[i][j]){
                s[j]='\0';
                return s;
            }
        }
        j++;
    }
    return s;
}