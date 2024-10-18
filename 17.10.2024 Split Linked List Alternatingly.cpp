class Solution {
  public:
    vector<Node*> alternatingSplitList(struct Node* head) {
        Node* head1 = NULL; 
        Node* head2 = NULL; 
        Node* tail1 = NULL; 
        Node* tail2 = NULL; 
        Node* curr = head;
        
        bool toFirstList = true; 
        
        while (curr != NULL) {
            if (toFirstList) {
                if (head1 == NULL) {
                    head1 = curr;
                    tail1 = head1;
                } else {
                    tail1->next = curr;
                    tail1 = tail1->next;
                }
            } else {
                if (head2 == NULL) {
                    head2 = curr;
                    tail2 = head2;
                } else {
                    tail2->next = curr;
                    tail2 = tail2->next;
                }
            }
            curr = curr->next;
            toFirstList = !toFirstList; 
        }
        
        if (tail1 != NULL) tail1->next = NULL;
        if (tail2 != NULL) tail2->next = NULL;
        
        return {head1, head2}; 
    }
};
