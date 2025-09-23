class Solution
{
public:
    // Function to push an element into the stack.
    void insert(stack<int> &s, int x)
    {
        // code here
        s.push(x);
    }

    // Function to remove top element from stack.
    void remove(stack<int> &s)
    {

        // code here
        s.pop();
    }

    // Function to print the top element of stack.

    void headOf_Stack(stack<int> &s)
    {
        // code here
        cout << s.top() << endl;
    }

    // Function to search an element in the stack.
    bool find(stack<int> s, int val)
    {
        // code here
        while (!s.empty())
        {
            if (s.top() == val)
                return true;
            s.pop();
        }
        return false;
    }
};