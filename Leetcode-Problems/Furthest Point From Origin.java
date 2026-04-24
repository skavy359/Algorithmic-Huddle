class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int ans=0,temp=0;
        for (char c : moves.toCharArray()) {
            if (c == 'L')
                ans--;
            else if (c == 'R')
                ans++;
            else temp++;
        }
        return Math.abs(ans)+temp;
    }
}