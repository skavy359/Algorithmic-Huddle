class Solution
{
public:
    bool isFascinating(int n)
    {
        string ans = to_string(n);
        ans += to_string(n * 2);
        ans += to_string(n * 3);
        // unordered_map<char, int> mp;
        // for(char c:ans){
        //     if(c=='0') return false;
        //     mp[c]++;
        //     if(mp[c]>1) return false;
        // }
        // return true;

        sort(ans.begin(), ans.end());
        return ans == "123456789";
    }
};