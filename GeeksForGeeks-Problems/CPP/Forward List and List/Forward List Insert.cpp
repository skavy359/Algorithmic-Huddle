// User function Template for C++

// arr: insert the elements of vector to forwardList
// Complete the function
forward_list<int> insertIntoFL(vector<int> &arr)
{
    // your code here
    forward_list<int> ans;
    for (int i : arr)
        ans.push_front(i);
    return ans;
    // Use push_front() method to push the elements in a forward list and return the
    // list
}