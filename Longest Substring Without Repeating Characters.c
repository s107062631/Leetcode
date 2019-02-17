int lengthOfLongestSubstring(char* s) {
    int len=strlen(s), front=0, num=1, max=1, j;
    
    if(len==0){
        return 0;
    }
    
    for(int i=1; i<len; i++){
        j = front;
        while(j<i){
            if(s[j]==s[i]){
                front = j+1;
            }else{
                num++;
                if(num>max){
                    max = num;
                }
            }
            j++;
        }
        num = 1;
    }
    
    return max;
}