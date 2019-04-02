/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *i;
    struct ListNode *newhead;
    struct ListNode *tmp, *pre=NULL;
    if(head!=NULL && head->next!=NULL){
        newhead = head->next;
    }else{
        newhead = head;
    }
    i = head;
    while(i!=NULL){
        if(i->next!=NULL){
            tmp = i->next;
            i->next = tmp->next;
            tmp->next = i;
            if(pre!=NULL){
                pre->next = tmp;
            }
            pre = i;
            i = i->next;
        }else{
            break;
        }
    }
    return newhead;
}
