class Solution
{
public
    List<List<Integer>> minimumAbsDifference(int[] arr)
    {
        List<List<Integer>> ans = new ArrayList<>();
        Arrays.sort(arr);
        int mini = Integer.MAX_VALUE;
        for (int i = 1; i < arr.length; i++)
        {
            mini = Math.min(mini, arr[i] - arr[i - 1]);
        }
        for (int i = 1; i < arr.length; i++)
        {
            ArrayList<Integer> temp = new ArrayList<Integer>();
            if (arr[i] - arr[i - 1] == mini)
            {
                temp.add(arr[i - 1]);
                temp.add(arr[i]);
            }
            if (!temp.isEmpty())
                ans.add(temp);
        }
        return ans;
    }
}