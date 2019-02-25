struct node{
    int val;
    int num;
    struct ListNode *next;
};

int majorityElement(int* nums, int numsSize) {
    struct node *front=NULL, *tmp=NULL;
    int max=nums[0], maxnum=1;
    for(int i=0; i<numsSize; i++){
        if(front==NULL){
            front = (struct node*)malloc(sizeof(struct node));
            front->val = nums[i];
            front->num = 1;
            front->next = NULL;
        }else{
            for(tmp=front; tmp->next!=NULL; tmp=tmp->next){
                if(tmp->val==nums[i]){
                    tmp->num++;
                }
            }
            if(tmp->val==nums[i]){
                tmp->num++;
            }else{
                tmp->next = (struct node*)malloc(sizeof(struct node));
                tmp = tmp->next;
                tmp->val = nums[i];
                tmp->num = 1;
                tmp->next = NULL;
            }
        }
    }
    
    for(tmp=front; tmp!=NULL; tmp=tmp->next){
        if(tmp->num>maxnum){
            max = tmp->val;
            maxnum = tmp->num;
        }
    }
    return max;
}