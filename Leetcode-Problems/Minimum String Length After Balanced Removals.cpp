class Solution
{
public:
    int minLengthAfterRemovals(string s)
    {
        int ans = 0;
        for (char c : s)
        {
            if (c == 'a')
            {
                ans++;
            }
            if (c == 'b')
            {
                ans--;
            }
        }
        return abs(ans);
        // stack<char>st;
        // for(char c:s){
        //     if(st.empty()){
        //         st.push(c);
        //     }
        //     else if(st.top()!=c){
        //         st.pop();
        //     }
        //     else{
        //         st.push(c);
        //     }
        // }
        // return st.size();
    }
};