class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        int ans = left;
        for (int i = left + 1; i <= right; i++) {
            ans = ans & i;
        }
        return ans;
    }
}

class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        int shiftCount = 0;
        while (left < right) {
            left >>= 1;
            right >>= 1;
            shiftCount++;
        }
        return left << shiftCount;
        //The result is the common binary prefix of left and right.
        //Jab tak numbers different hai iska matlab hoga ki right bit 0-1 mein differ kar rahi toh uska AND zero hoga
        //Yeh common prefix method hai iss question ko nikalne ka
        //left<<shiftCount isiliye kar rahe hai kyuki We right shift both numbers until we find their common prefix.
        // Then we left shift back to restore the removed bits, which become zeros in the final AND result.
    }
}

class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        while (right > left) {
            right = right & (right - 1);
        }
        return right;
    }
}