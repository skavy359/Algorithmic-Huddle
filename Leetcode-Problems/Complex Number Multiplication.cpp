class Solution
{
public:
    string complexNumberMultiply(string num1, string num2)
    {
        string ans;
        string r1, r2, c1, c2;
        int i = 0, j = 0;
        while (num1[i] != '+')
            r1.push_back(num1[i++]);
        i++;
        while (num2[j] != '+')
            r2.push_back(num2[j++]);
        j++;
        while (num1[i] != 'i')
            c1.push_back(num1[i++]);
        while (num2[j] != 'i')
            c2.push_back(num2[j++]);

        int x1 = stoi(r1);
        int x2 = stoi(r2);
        int y1 = stoi(c1);
        int y2 = stoi(c2);

        int ans_real = x1 * x2 - y1 * y2;
        int ans_img = x1 * y2 + x2 * y1;

        ans = to_string(ans_real) + "+" + to_string(ans_img) + "i";
        return ans;
    }
};