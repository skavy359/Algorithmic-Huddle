class Solution {
    public List<Integer> toggleLightBulbs(List<Integer> bulbs) {
        // TreeSet<Integer> st = new TreeSet<>();
        // for (int i : bulbs) {
        //     if (st.contains(i)) {
        //         st.remove(i);
        //     } else {
        //         st.add(i);
        //     }
        // }
        // List<Integer> ans = new ArrayList<>(st);
        // return ans;

        boolean arr[] = new boolean[101];
        for (int i : bulbs) {
            arr[i] = !arr[i];
        }
        List<Integer> ans = new ArrayList<>();
        for (int i = 1; i <= 100; i++) {
            if (arr[i]) {
                ans.add(i);
            }
        }
        return ans;
    }
}