/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode * removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *tmp;
    int num=0, i=1;
    tmp = head;
    
    while(tmp!=NULL){
        num++;
        tmp = tmp->next;
    }
    
    num = num-n;
    tmp = head;
    
    printf("%d ", num);
    while(tmp!=NULL){
        if(num==0){
            tmp = tmp->next;
            return tmp;
        }
        if(i==num){
            tmp->next = (tmp->next)->next;
            break;
        }
        i++;
        tmp = tmp->next;
    }
    
    return head;
}