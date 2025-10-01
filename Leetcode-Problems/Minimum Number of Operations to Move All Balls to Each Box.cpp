class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        vector<int> ans;
        for (int i = 0; i < boxes.length(); i++)
        {
            int temp = 0;
            for (int j = 0; j < boxes.length(); j++)
            {
                if (boxes[j] == '1')
                {
                    temp += abs(i - j);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

// More Efficient Solution
class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        vector<int> ans(boxes.length(), 0);
        int temp = 0, moves = 0;
        for (int i = 0; i < boxes.length(); i++)
        {
            ans[i] += moves;
            if (boxes[i] == '1')
                temp++;
            moves += temp;
        }
        temp = 0, moves = 0;
        for (int i = boxes.length() - 1; i >= 0; i--)
        {
            ans[i] += moves;
            if (boxes[i] == '1')
                temp++;
            moves += temp;
        }
        return ans;
    }
};