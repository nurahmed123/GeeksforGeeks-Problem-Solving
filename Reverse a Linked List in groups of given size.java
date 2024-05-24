

/*node class of the linked list

class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}

*/

class Solution
{
    public static Node reverse(Node head, int k)
    {
         Node curr=head, prevFirst=null; 
        //strore last node of reversed grp
        boolean isFirst=true;
         
        while(curr!=null)
        {
            Node first=curr;// to store the starting node of each group, 
            //which will also be the last node after getting reversed.
        //reversal
            Node prev=null; int count=0;
             while(curr!=null && count<k){
        
                Node next=curr.next; 
                curr.next=prev; prev=curr; curr = next; 
                
                count++;
            } 
            
            if(isFirst ){
                head = prev; isFirst=false;
            }
            else
            prevFirst.next=prev; // pointing to new head of current reversed grp
            
            prevFirst=first; 
        }
         return head;
    }
}