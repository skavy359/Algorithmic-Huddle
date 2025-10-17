// Two Loops
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int len = 0;
        ListNode *curr = head;
        while (curr != NULL)
        {
            len++;
            curr = curr->next;
        }
        if (len == n)
        {
            head = head->next;
            return head;
        }
        curr = head;
        for (int i = 1; i < len - n; i++)
        {
            curr = curr->next;
        }
        ListNode *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
};

// Efficient using Two Pointers
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *slow = head, *fast = head;
        if (head == NULL)
            return NULL;
        for (int i = 0; i < n; i++)
        {
            if (fast == NULL)
                return head;
            fast = fast->next;
        }
        if (fast == NULL)
        {
            head = head->next;
            return head;
        }
        while (fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
    }
};