
//Back-end complete function Template for Java
import java.util.*;

public class Solution {
    public static void solve() {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        boolean ans = true;
        if (year % 400 == 0)
            ans = true;
        else if (year % 100 == 0)
            ans = false;
        else if (year % 4 == 0)
            ans = true;
        else
            ans = false;
        if (ans)
            System.out.println("True");
        else
            System.out.println("False");
    }
}