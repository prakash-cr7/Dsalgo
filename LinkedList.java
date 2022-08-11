class LinedList {
    public static void main(String args[]) {
        Node root = new Node(1);
        root.next = new Node(2);
        root.next.next = new Node(3);
        root.next.next.next = new Node(4);

        traverse(reverse(root));
    }

    public static Node deleteDuplicates(Node head) {
        if(head == null || head.next == null) return head;
        Node curr = head;
        while(curr != null){
            Node temp = curr.next;
            while(temp != null && curr.val == temp.val) temp=temp.next;
            curr.next = temp;
            curr = curr.next;
        }
        return head;
    }

    static Node reverse(Node head){
        if(head == null || head.next == null) return head;
        Node curr = head.next;
        Node prev = head;
        head.next = null;

        while(curr != null){
            Node next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    static Node middle(Node head){
        if(head == null || head.next == null) return head;
        Node slow = head, fast = head;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    static void traverseCirc(Node head) {
        if (head == null)
            return;
        System.out.println(head.val);
        for (Node r = head.next; r != head; r = r.next) {
            System.out.println(r.val);
        }
    }

    static Node deleteAtk(int k, Node head) {
        if (head == null || (head.next == head && k == 1))
            return null;
        Node curr = head;
        if (k == 1) {
            curr.val = curr.next.val;
            curr.next = curr.next.next;
            return head;
        } else {
            for (int i = 0; i < k - 2; i++) {
                curr = curr.next;
            }
            curr.next = curr.next.next;
        }
        return head;
    }

    static Node create(int k) {
        Node root = new Node(-1);
        Node a = root;
        for (int i = 1; i <= k; i++) {
            Node temp = new Node(i);
            a.next = temp;
            a = a.next;
        }
        return root.next;
    }

    static void traverse(Node root) {
        Node curr = root;
        while (curr != null) {
            System.out.println(curr.val);
            curr = curr.next;
        }
    }

    static Node insert(int n, int p, Node root) {
        Node a = new Node(n);
        Node curr = root;
        int i = 1;
        while (curr != null) {
            if (i == p - 1) {
                Node temp = curr.next;
                curr.next = a;
                a.next = temp;
                return root;
            }
        }
        return root;
    }

    static void recurse(Node root) {
        if (root == null)
            return;
        System.out.println(root.val);
        recurse(root.next);
    }
}

class Node {
    Node next;
    int val;

    Node(int v) {
        val = v;
        next = null;
    }
}