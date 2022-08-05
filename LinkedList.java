class LinedList {
    public static void main(String args[]){
        Node root = new Node(5);
        System.out.println(root.val);
    }
}

class Node {
    Node next;
    int val;

    Node(int v){
        val = v;
        next = null;
    }
}