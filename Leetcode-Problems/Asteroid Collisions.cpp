class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        vector<int> st;
        for (int i : asteroids)
        {
            bool flag = true;
            while (!st.empty() && i < 0 && st.back() > 0)
            {
                if (abs(i) > st.back())
                    st.pop_back();
                else if (abs(i) == st.back())
                {
                    st.pop_back();
                    flag = false;
                    break;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                st.push_back(i);
        }
        return st;
    }
};