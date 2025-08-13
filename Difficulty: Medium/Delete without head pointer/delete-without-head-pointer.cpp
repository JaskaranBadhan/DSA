/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
    void deleteNode(Node* curr) {
        // code here
        Node *temp = curr->next;
        curr->data = temp->data;//copying data of deleted element and next element 
        curr->next = temp->next;
        delete temp;
        
    }
};