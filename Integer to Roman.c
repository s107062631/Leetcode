char* intToRoman(int num) {
    int arr[7]={1000, 500, 100, 50, 10, 5, 1}, i=0, len=0;
    char *s, words[7]={'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    s = (char*)malloc(sizeof(char)*20);

    while(num>=arr[6]){
        if(num>=arr[i]){
            if(i%2==0 && num/arr[i]==4){
                s[len++] = words[i];
                s[len++] = words[i-1];
                num = num - 4*arr[i];
            }else if(i%2==1 && (num-arr[i])/arr[i+1]==4){
                s[len++] = words[i+1];
                s[len++] = words[i-1];
                num = num - arr[i+1]*9;
            }else{
                s[len++] = words[i];
                num = num - arr[i];
            }
        }else{
            i++;
        }
    }
    s[len] = '\0';
    return s;
}