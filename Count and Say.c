char* countAndSay(int n) {
    int i=1, j, num, k;
    char *odd, *even, tmp;
    
    even = (char*)malloc(sizeof(char)*5000);
    odd = (char*)malloc(sizeof(char)*5000);
    
    even[0] = '1';
    even[1] = '\0';
    
    while(i<n){
        j = 1;
        k = 0;
        num = 1;
        if(i%2==1){
            tmp = even[0];
            while(true){
                if(even[j]=='\0'){
                    odd[k++] = num + '0';
                    odd[k++] = tmp;
                    odd[k++] = '\0';
                    break;
                }
                if(even[j]==tmp){
                    num++;
                }else{
                    odd[k++] = num + '0';
                    odd[k++] = tmp;
                    tmp = even[j];
                    num = 1;
                }
                j++;
            }
        }else{
            tmp = odd[0];
            while(true){
                if(odd[j]=='\0'){
                    even[k++] = num + '0';
                    even[k++] = tmp;
                    even[k++] = '\0';
                    break;
                }
                if(odd[j]==tmp){
                    num++;
                }else{
                    even[k++] = num + '0';
                    even[k++] = tmp;
                    tmp = odd[j];
                    num = 1;
                }
                j++;
            }
        }
        i++;
    }
    if(i%2==0){
        return odd;
    }else{
        return even;
    }
}