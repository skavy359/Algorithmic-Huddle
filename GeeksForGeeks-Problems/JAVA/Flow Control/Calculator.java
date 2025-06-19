class Solution {
    public void calculate(int a, int b, int op) {
        // code here
        int ans = 0;
        boolean check = true;
        switch (op) {
            case 1:
                ans = a + b;
                break;
            case 2:
                ans = a - b;
                break;
            case 3:
                ans = a * b;
                break;
            default:
                check = false;
                break;
        }
        if (!check) {
            System.out.println("Invalid Input");
        } else {
            System.out.println(ans);
        }
    }
}
