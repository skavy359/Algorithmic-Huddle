class SmallestInfiniteSet
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    set<int> st;
    SmallestInfiniteSet()
    {
        for (int i = 1; i <= 1000; i++)
        {
            pq.push(i);
            st.insert(i);
        }
    }

    int popSmallest()
    {
        int ans = pq.top();
        pq.pop();
        st.erase(ans);
        return ans;
    }

    void addBack(int num)
    {
        if (!st.count(num))
            pq.push(num);
        st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */

// Another Solution
class SmallestInfiniteSet
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_set<int> st;
    int curr = 1;
    SmallestInfiniteSet() {}

    int popSmallest()
    {
        if (!pq.empty())
        {
            int ans = pq.top();
            pq.pop();
            st.erase(ans);
            return ans;
        }
        return curr++;
    }

    void addBack(int num)
    {
        if (num < curr && !st.count(num))
        {
            pq.push(num);
            st.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */