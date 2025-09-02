class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> ans;
        int temp;
        for (string s : tokens)
        {
            if (s == "+" || s == "-" || s == "*" || s == "/")
            {
                int op1 = ans.top();
                ans.pop();
                int op2 = ans.top();
                ans.pop();
                if (s == "+")
                {
                    temp = op2 + op1;
                }
                else if (s == "-")
                {
                    temp = op2 - op1;
                }
                else if (s == "*")
                {
                    temp = op2 * op1;
                }
                else if (s == "/")
                {
                    temp = op2 / op1;
                }
                ans.push(temp);
            }
            else
            {
                ans.push(stoi(s));
            }
        }
        return ans.top();
    }
};