/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    int getCount(Node *head)
    {
        // Code here
        int len = 0;
        while (head != NULL)
        {
            len++;
            head = head->next;
        }
        return len;
    }
};