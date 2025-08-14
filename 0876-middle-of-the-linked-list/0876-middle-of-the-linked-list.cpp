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
    ListNode* middleNode(ListNode* head) {
       /* ListNode* slow = head;//slow pointing head 
        ListNode* fast = head;//fast pointing head
        while(fast !=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;*/
        int count = 0;
        //Count total number of nodes
        ListNode *temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        };
        count/=2;
        //This number of step I have to take from strt
        temp = head;
        while(count--){
            temp = temp->next;
        }
        return temp;
        
    }
};