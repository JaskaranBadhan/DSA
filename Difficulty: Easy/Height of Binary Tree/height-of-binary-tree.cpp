/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
        if(node == NULL){
            return -1;
        }
        int LDepth = height(node->left);
        int RDepth = height(node->right);
        return max(LDepth,RDepth) + 1;
    }
};