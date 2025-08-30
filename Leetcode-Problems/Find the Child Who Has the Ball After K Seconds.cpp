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

// Another Solution
class Solution
{
public:
    int numberOfChild(int n, int k)
    {
        int i = 0, direction = 1;
        while (k > 0)
        {
            if (direction == 1)
            {
                i++;
                if (i == (n - 1))
                {
                    direction = 0;
                }
            }
            else
            {
                i--;
                if (i == 0)
                {
                    direction = 1;
                }
            }
            k--;
        }
        return i;
    }
};