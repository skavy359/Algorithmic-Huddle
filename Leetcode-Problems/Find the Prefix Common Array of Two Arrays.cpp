class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        vector<int> ans;
        vector<int> freq(A.size() + 1, 0);
        int temp = 0;
        for (int i = 0; i < A.size(); i++)
        {
            freq[A[i]]++;
            if (freq[A[i]] == 2)
                temp++;
            freq[B[i]]++;
            if (freq[B[i]] == 2)
                temp++;
            ans.push_back(temp);
        }
        return ans;
    }
};