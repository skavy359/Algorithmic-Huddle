// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         for(int i:nums){
//             mp[i]++;
//         }
//         for(auto i:mp){
//             if(i.second>nums.size()/2){
//                 return i.first;
//             }
//         }
//         return 0;
//     }
// };

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int res = 0;
        int majority = 0;

        for (int n : nums)
        {
            if (majority == 0)
            {
                res = n;
            }

            majority += n == res ? 1 : -1;
        }

        return res;
    }
};