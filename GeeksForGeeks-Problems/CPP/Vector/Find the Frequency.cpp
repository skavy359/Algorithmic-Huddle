/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution
{
public:
    int findFrequency(vector<int> arr, int x)
    {
        // Your code here
        int ans = count(arr.begin(), arr.end(), x);
        return ans;
    }
};