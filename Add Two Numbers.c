/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry=0, value;
    struct ListNode *tmp, *front;
    tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    front = tmp;
    
    while(l1!=NULL && l2!=NULL){
        
        value = l1->val + l2->val + carry;
        tmp->val = value % 10;
        carry = value /10;

        l1 = l1->next;
        l2 = l2->next;
        if(l1==NULL || l2==NULL){
            tmp->next = NULL;
            break;
        }
        tmp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp = tmp->next;
    }
    
    while(l1!=NULL){
        tmp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp = tmp->next;
        
        value = l1->val + carry;
        tmp->val = value % 10;
        carry = value /10;
        
        l1 = l1->next;
        if(l1==NULL){
            tmp->next = NULL;
            break;
        }
    }
    
    while(l2!=NULL){
        tmp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp = tmp->next;
        
        value = l2->val + carry;
        tmp->val = value % 10;
        carry = value /10;
        
        l2 = l2->next;
        if(l2==NULL){
            tmp->next = NULL;
            break;
        }
    }
    
    if(carry == 1){
        tmp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp = tmp->next;
        tmp->val = carry;
        tmp->next = NULL;
    }
    
    return front;
}