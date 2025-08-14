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
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;//vector to store the data
        ListNode *temp = head;//temp pointer pointing to head element
        while(temp!=NULL){
            ans.push_back(temp->val);//the temp value will store  in the ans 
            temp = temp->next;//temp will iterate to next
        }
        int i = ans.size()-1;//reverse the data to last index
        temp = head;
        while(temp){
            temp->val = ans[i];//the value in temp->next will update in ans(i)
            i--;
            temp = temp->next;//iterating temp to temp->next
        }
        return head;
    }
};