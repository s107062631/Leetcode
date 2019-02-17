char* addBinary(char* a, char* b) {
    int lena=strlen(a)-1, lenb=strlen(b)-1, carry=0, val, len, max;
    char *tmp, *arr;
    
    if(lena < lenb){
        tmp = b;
        len = lenb;
    }else{
        tmp = a;
        len = lena;
    }
    max = len + 2;
    
    while(lena>=0 && lenb>=0){
        val = a[lena]-'0' + b[lenb]-'0' + carry;
        tmp[len] = val%2 +'0';
        carry = val/2;
        lena--;
        lenb--;
        len--;
    }
    
    while(len>=0){
        val = tmp[len]-'0' + carry;
        tmp[len] = val%2 +'0';
        carry = val/2;
        len--;
    }
    
    if(carry==1){
        arr = (char*)malloc(sizeof(char)*(max+1));
        arr[0] = '1';
        for(int i=1; i<max; i++){
            arr[i] = tmp[i-1];
        }
        arr[max]='\0';
        return arr;
    }else{
        return tmp;
    }
}