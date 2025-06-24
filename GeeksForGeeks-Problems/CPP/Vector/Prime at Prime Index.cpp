// User function Template for C++

// vector<int> v: containing N elements
//  Find and return vector of elements containing
//  prime number at prime index
class Solution
{
public:
    bool isPrime(int n)
    {
        if (n == 0 || n == 1)
            return false;
        if (n == 2)
            return true;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    vector<int> primeAtPrime(vector<int> &arr)
    {
        // code here
        vector<int> res;
        for (int i = 0; i < arr.size(); i++)
        {
            if (isPrime(i + 1) && isPrime(arr[i]))
            {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};