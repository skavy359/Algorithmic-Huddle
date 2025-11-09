class Solution
{
public:
    int minimumDistance(vector<int> &nums)
    {
        unordered_map<int, vector<int>> mp;
        mp.reserve(nums.size() * 2);
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]].push_back(i);
        }
        int ans = INT_MAX;

        for (auto &i : mp)
        {
            auto &idx = i.second;
            if (idx.size() < 3)
                continue;
            for (int i = 0; i + 2 < idx.size(); i++)
            {
                int diff = idx[i + 2] - idx[i];
                ans = min(ans, 2 * diff);
            }
            // for(int i=0;i+2<idx.size();i++){
            //     for(int k=i+2;k<idx.size();k++){
            //         ans=min(ans,2*(idx[k]-idx[i]));
            //         found=true;
            //     }
            // }

            // for(int i=0;i<idx.size();i++){
            //     for(int j=i+1;j<idx.size();j++){
            //         for(int k=j+1;k<idx.size();k++){
            //             int a=idx[i],b=idx[j],c=idx[k];
            //             ans=min(ans,abs(a-b)+abs(b-c)+abs(c-a));
            //             found=true;
            //         }
            //     }
            // }
        }
        if (ans != INT_MAX)
            return ans;
        return -1;
    }
};
©leetcode