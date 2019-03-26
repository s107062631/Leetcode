char* longestPalindrome(char* s) {
    int len=strlen(s), max, start;
    bool **m;
    
    if(len==0){
        s[0] = '\0';
        return s;
    }
    
    m = (bool**)malloc(sizeof(bool*)*len);
    for(int i=0; i<len; i++){
        m[i] = (bool*)malloc(sizeof(bool)*len);
        m[i][i] = true;
        max = 1;
        start = i;
    }
    
    for(int i=1; i<len; i++){
        if(s[i-1]==s[i]){
            m[i-1][i] = true;
            start = i-1;
            max = 2;
        }else{
            m[i-1][i] = false;
        }
    }
    
    for(int k=3; k<=len; ++k){
        for(int i=0; i<len-k+1; ++i){
            int j=k+i-1;
            
            if(m[i+1][j-1] && s[i]==s[j]){
                m[i][j] = true;
                if(k>=max){
                    max = k;
                    start = i;
                }
            }else{
                m[i][j] = false;
            }
        }
    }
    
    for(int i=0; i<max; i++){
        s[i] = s[start+i];
    }
    s[max] = '\0';
    return s;
}