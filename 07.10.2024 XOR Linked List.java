 class Solution {
    static Node insert(Node head, int data) {
        Node new_head = new Node(data);
        new_head.npx = head;
        return new_head;
    }

    static ArrayList<Integer> getList(Node head) {
        Node cur = head;
        ArrayList<Integer> al = new ArrayList<>();
        while(cur!=null){
            al.add(cur.data);
            cur = cur.npx;
        }
        return al;
    }
}
