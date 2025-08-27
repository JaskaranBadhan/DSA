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
        int count =0;
        ListNode*temp = head;
        //Count total number of Listnodes
        while(temp!=NULL){
            count ++;
            temp = temp->next;
        };
        count-=n;//for skipping node eg 5-2=3 skip 3 node 2 is N
        if(count ==0){//from back 5th node means first node
            temp= head;
            head = head->next;
            delete temp;
            return head;
        }
        //Removing nth element
        ListNode*curr = head,*prev = NULL;
        while(count--){
            prev = curr;
            curr = curr->next;
        };
        prev->next = curr->next;
        delete curr;
        return head;
    }
};