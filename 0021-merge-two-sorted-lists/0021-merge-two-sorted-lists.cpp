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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if (list1 != NULL) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        return dummy.next;
    }
};

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* temp1=list1;
//         ListNode* temp2=list2;

//         while (temp1!=NULL && temp2!=NULL){
//             if (temp1->val <= temp2->val){
//                 ListNode* a=temp1->next;
//                 temp1->next=temp2;
//                 temp1 = a;
//             } 
//             else{
//                 ListNode* b=temp2->next;
//                 temp2->next=temp1;
//                 temp2 = b;
//             }
//         }

//         if (list1==NULL){
//             return list2;
//         } 
//         else{
            
            
//             return list1;
//         }
//     }
// };