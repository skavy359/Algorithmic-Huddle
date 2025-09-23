// User function Template for C++

/*
V: remove elements from this vector within range
start: starting position
end: end position
*/
void removeWithinRange(vector<int> &V, int start, int end)
{
    // your code here
    V.erase(V.begin() + start, V.begin() + end);
}