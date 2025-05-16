class Solution
{
public:
    int maximum69Number(int num)
    {
        string temp = to_string(num);
        int max = num;
        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] == '6')
            {
                temp[i] = '9';
            }
            else if (temp[i] == '9')
            {
                temp[i] = '6';
            }
            int temp1 = stoi(temp);
            if (temp1 > max)
            {
                max = temp1;
            }
            if (temp[i] == '6')
            {
                temp[i] = '9';
            }
            else if (temp[i] == '9')
            {
                temp[i] = '6';
            }
        }
        return max;
    }
};