bool isPalindrome(char* s) {
    int front=0, last=strlen(s);
    for(int i=0; i<last; i++){
        if('A'<=s[i] && 'Z'>=s[i]){
            s[front++] = s[i] + 'a' - 'A';
        }else if(('0'<=s[i] && s[i]<='9') || ('a'<=s[i] && 'z'>=s[i])){
            s[front++] = s[i];
        }
    }
    
    last = front-1;
    front = 0;
    while(front<last){
        if(s[front]!=s[last]){
            return false;
        }
        front++;
        last--;
    }
    return true;
}