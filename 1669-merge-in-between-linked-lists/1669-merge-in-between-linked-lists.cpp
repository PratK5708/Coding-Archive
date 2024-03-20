class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *curr = list1;
        int i=0;
        while(i<a-1){
            curr=curr->next;
            i++;
        }
        
        ListNode *ref=curr;
        
        for(int j=0;j<=b-a;j++){
            curr=curr->next;
        }
        ref->next=list2;
        
        ListNode *add=list2;
        while (add->next!=nullptr){
            add=add->next;
        }
        add->next=curr->next;
        curr->next=nullptr;
        
        return list1;
    }
};
