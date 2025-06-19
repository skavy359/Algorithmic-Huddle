/* Structure of the element of the array is as

struct Height {
    int feet;
    int inches;
};
*/

// function must return the maximum Height
// return the height in inches
class Solution
{
public:
    int findMax(vector<Height> &arr)
    {
        // Code here
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            int calc = arr[i].feet * 12;
            calc += arr[i].inches;
            ans = max(ans, calc);
        }
        return ans;
    }
};