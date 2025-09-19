class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        queue<int> q(students.begin(), students.end());
        int k = 0;
        int i = 0;
        while (!q.empty() && k < q.size())
        {
            if (q.front() == sandwiches[i])
            {
                q.pop();
                i++;
                k = 0;
            }
            else
            {
                int temp = q.front();
                q.pop();
                q.push(temp);
                k++;
            }
            if (k > q.size())
                break;
        }
        return (int)q.size();
    }
};