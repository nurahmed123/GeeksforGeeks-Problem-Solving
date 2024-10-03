/* Multiply contents of two linked lists */
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
         long long num1=0,num2=0;
        int mod=1000000007;
        Node *temp=first;
        while(temp){
            num1=(num1*10+(temp->data))%mod;
            temp=temp->next;
        }
        temp=second;
        while(temp){
            num2=(num2*10+(temp->data))%mod;
            temp=temp->next;
        }
        return (num1*num2)%mod;
    }
};