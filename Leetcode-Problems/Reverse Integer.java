class Solution {
    public int reverse(int x) {
        StringBuilder num = new StringBuilder(Integer.toString(Math.abs(x)));
        num.reverse();
        long y = Long.parseLong(num.toString());
        if (y > Integer.MAX_VALUE || y < Integer.MIN_VALUE) {
            return 0;
        }
        if (x < 0)
            return (int) -y;
        else
            return (int) y;
    }
}

class Solution {
    public int reverse(int x) {
        boolean neg = (x < 0) ? true : false;
        int rev = 0;
        x = Math.abs(x);
        while (x > 0) {
            int rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }
        if (rev > Integer.MAX_VALUE || rev < Integer.MIN_VALUE)
            return 0;
        if (neg)
            rev = -rev;
        return rev;
    }
}

class Solution {
    public int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int rem = x % 10;
            x /= 10;
            if (rev > Integer.MAX_VALUE / 10 || (rev == Integer.MAX_VALUE / 10 && rem > 7))
                return 0;
            if (rev < Integer.MIN_VALUE / 10 ||
                    (rev == Integer.MIN_VALUE / 10 && rem < -8))
                return 0;
            rev = rev * 10 + rem;
        }
        return rev;
    }
}