// User function Template for C++

class Solution
{
public:
    int marks(int a)
    {
        // code here
        try
        {
            if (a < 0 || a > 100)
                throw -1;
            return a;
        }
        catch (int e)
        {
            return e;
        }
    }
};