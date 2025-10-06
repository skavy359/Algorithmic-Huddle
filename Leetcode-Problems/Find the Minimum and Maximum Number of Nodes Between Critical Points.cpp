/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        vector<int> ans;
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return {-1, -1};
        int temp = 1;
        while (head->next->next != NULL)
        {
            temp++;
            if ((head->val < head->next->val &&
                 head->next->val > head->next->next->val) ||
                (head->val > head->next->val &&
                 head->next->val < head->next->next->val))
            {
                ans.push_back(temp);
            }
            head = head->next;
        }
        if (ans.size() < 2)
            return {-1, -1};
        int mini = INT_MAX, maxi = ans.back() - ans.front();
        for (int i = 0; i < ans.size() - 1; i++)
        {
            mini = min(mini, ans[i + 1] - ans[i]);
        }
        return {mini, maxi};
    }
};