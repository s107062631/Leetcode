/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode* big=NULL, *small=NULL, *tmp=head, *hbig=NULL, *hsmall=NULL;
    
    if(head==NULL){
        return head;
    }
    
    while(tmp!=NULL){
        if(tmp->val >= x){
            if(big==NULL){
                big = tmp;
                hbig =  tmp;
            }else{
                big->next = tmp;
                big = big->next;
            }
        }else{
            if(small==NULL){
                small = tmp;
                hsmall =  tmp;
            }else{
                small->next = tmp;
                small = small->next;
            }
        }
        tmp = tmp->next;
        
    }
    
    if(small!=NULL){
        small->next = hbig;
        if(big!=NULL)
            big->next = NULL;
    }else{
        big->next = NULL;
        return hbig;
    }
    
    return hsmall;
}