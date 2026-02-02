class Solution {
    public int maxNumberOfBalloons(String text) {
        int arr[] = new int[26];
        for (char c : text.toCharArray()) {
            arr[c - 'a']++;
        }
        return Math.min(
                Math.min(arr[1], arr[0]),
                Math.min(
                        Math.min(arr[11] / 2, arr[14] / 2),
                        arr[13]));
    }
}