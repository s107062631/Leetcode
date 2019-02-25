/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void swap(struct ListNode *a, struct ListNode *b){
    int tmp;
    tmp = a->val;
    a->val = b->val;
    b->val = tmp;
}

struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *i;
    i = head;
    while(i!=NULL){
        if(i->next!=NULL){
            swap(i, i->next);
            i = i->next->next;
        }else{
            break;
        }
    }
    return head;
}