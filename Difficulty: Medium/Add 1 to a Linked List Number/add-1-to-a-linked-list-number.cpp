/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        Node *curr = head,*nxt= head->next,*prev = NULL;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        Node *lasthead = prev;
        while(prev){
            if(prev->data !=9){
                prev->data+=1;
                break;
            }
            else prev->data=0;
                prev= prev->next;
        }
        if(!prev)head->next = new Node(1);
        curr = lasthead;
        nxt= lasthead->next;
        prev = NULL;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        // return head of list after adding one
        return prev;
    }
};