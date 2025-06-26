class Solution
{
public:
    int numberOfChild(int n, int k)
    {
        n = n - 1;
        int comp = k / n;
        int rem = k % n;
        if (comp % 2 == 0)
            return rem;
        return n - rem;
    }
};