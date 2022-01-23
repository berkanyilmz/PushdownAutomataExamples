package automata;

import datastructure.*;
import java.util.Scanner;

public class Main {
    static Stack stack = new Stack();

    public static boolean automata(String data, int i) {
        if (i == data.length()) {
            if (stack.head.chr == 'z') {
                stack.pop();
                return true;
            } else {
                return false;
            }
        }
        else if (data.charAt(i) == '0') {
            stack.push(new Node('0'));
            return automata(data, i + 1);
        }
        else if (stack.head.chr == '0' && data.charAt(i) == '1') {
            stack.pop();
            return automata(data, i + 1);
        }
        else {
            return false;
        }
    }

    public static void main(String[] args) {
        stack.push(new Node('z'));
        Scanner input = new Scanner(System.in);
        System.out.println("Your entry : ");
        String data = input.nextLine();
        boolean isTrue = automata(data, 0);
        if (isTrue) {
            System.out.println("Positive !");
        } else {
            System.out.println("Negative !");
        }
    }
}
