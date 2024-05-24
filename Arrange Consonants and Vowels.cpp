/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
        Node *vowel=new Node('a'),*con=new Node('b');
        Node *vowelH=vowel,*conH=con;
        while(head){
            char temp = head->data;
            if(temp=='a' or temp=='e' or temp=='i' or temp=='o' or temp=='u'){
                vowel->next=head;
                vowel=vowel->next;
            }
            else{
                con->next=head;
                con=con->next;
            }
            head=head->next;
        }
        con->next=NULL;
        vowel->next=conH->next;
        return vowelH->next;
    }
};