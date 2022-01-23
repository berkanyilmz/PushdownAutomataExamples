package datastructure;

public class Stack {
    public Node head = null;

    public Stack() {
    }

    boolean isEmpty() {
        return this.head == null;
    }

    public void push(Node node) {
        if (this.isEmpty()) {
            this.head = node;
        } else {
            node.down = this.head;
            this.head = node;
        }

    }

    public Node pop() {
        if (this.isEmpty()) {
            System.out.println("Stack is empty");
            return null;
        } else {
            Node delete = this.head;
            this.head = this.head.down;
            return delete;
        }
    }
}
