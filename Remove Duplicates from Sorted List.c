/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *tmp=head, *front=head;
    
    while(tmp!=NULL){
        if(tmp->val!=front->val){
            front->next = tmp;
            front = front->next;
            
        }else{
            tmp = tmp->next;
        }
        if(tmp==NULL){
            front->next=NULL;
        }
    }
    return head;
}