class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int count = 1;
        int temp = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            if (temp == arr[i])
                count++;
            else
                count = 1;

            if (count > arr.size() / 4)
                return arr[i];
            temp = arr[i];
        }
        return temp;
    }
};