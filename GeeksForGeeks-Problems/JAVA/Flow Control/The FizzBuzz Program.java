import java.util.*;

public class Solution {
    public static void main(String args[]) {
        // Your Code Here
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        if (a % 3 == 0) {
            System.out.print("Fizz");
            if (a % 5 == 0) {
                System.out.print("Buzz");
            }
            System.out.println();
        } else if (a % 5 == 0) {
            System.out.println("Buzz");
        } else {
            System.out.println(a);
        }
    }
}