/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *tmp, *front;
    tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
    front = tmp;
    if(l1==NULL && l2==NULL){
        return NULL;
    }else if(l1==NULL){
        return l2;
    }else if(l2==NULL){
        return l1;
    }
    
    while(l1!=NULL && l2!=NULL){
        if(l1->val <= l2->val){
            tmp->val = l1->val;
            l1 = l1->next;
        }else{
            tmp->val = l2->val;
            l2 = l2->next;
        }
        tmp->next = NULL;
        if(l1!=NULL && l2!=NULL){
            tmp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            tmp = tmp->next;
        }
    }
    if(l1!=NULL){
        tmp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp = tmp->next;
        tmp->val = l1->val;
        tmp->next = l1->next;
    }else if(l2!=NULL){
        tmp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp = tmp->next;
        tmp->val = l2->val;
        tmp->next = l2->next;
    }
    return front;
}