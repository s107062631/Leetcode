int lengthOfLastWord(char* s) {
    int i=0, num=0, flag=0;
    while(s[i]!='\0'){
        if(s[i]!=' '){
            if(flag==0){
                num=0;
                flag = 1;
            }
            num++;
        }else{
            flag = 0;
        }
        i++;
    }
    return num;
}