char* convert(char* s, int numRows) {
    char *arr[numRows];
    int len=strlen(s);
    
    if(numRows==1){
        return s;
    }
    
    int i, j, k, flag;
    for(i=0; i<numRows; i++){
        arr[i] = (char*)malloc(sizeof(char)*len);
    }
    
    for(i=0; i<numRows; i++){
        for(int j=0; j<len; j++){
            arr[i][j] = '0';
        }
    }
    flag = 0;
    i = -1;
    j = 0;
    for(k=0; k<len; k++){
        if(flag==0){
            arr[++i][j] = s[k];
            if(i==numRows-1){
                flag = 1;
            }
        }else if(flag==1){
            arr[--i][++j] = s[k];
            if(i==0){
                flag = 0;
            }
        }
    }
    k = 0;
    for(i=0; i<numRows; i++){
        for(j=0; j<len; j++){
            if(arr[i][j]!='0'){
                s[k++] = arr[i][j];
            }
        }
    }
    s[k++] = '\0';
    return s;
}