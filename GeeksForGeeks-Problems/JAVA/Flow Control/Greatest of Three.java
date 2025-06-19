
//Back-end complete function Template for Java
import java.util.*;

public class Solution {
    public static void main(String args[]) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int ans = Math.max(a, (Math.max(b, c)));
        System.out.println(ans);
    }
}