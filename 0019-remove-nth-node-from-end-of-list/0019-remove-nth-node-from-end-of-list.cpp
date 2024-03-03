/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> abc;
        while (head!=nullptr){
            abc.push_back(head->val);
            head=head->next;
        }
        for (int i=0;i<abc.size();i++){
            if (i==(abc.size())-n){
                abc.erase(abc.begin()+ i);
                break;
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
    //new segment
        ListNode* newHead=nullptr;
        ListNode* prev=nullptr;
        for (int val : abc) {
            ListNode* newNode = new ListNode(val);
            if (prev == nullptr) {
                newHead = newNode;
            } else {
                prev->next = newNode;
            }
            prev = newNode;
        }
        
        return newHead;
    }
};