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

// Iterative Solution
//  x is the element to be searched
int idx = 1;
while (head != NULL)
{
    if (head->data == x)
    {
        return idx;
    }
    head = head->next;
    idx++;
}
return -1;

// Recursive Solution
function search(head, x)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
        return 1;
    int res = search(head->next, x);
    if (res == -1)
        return -1;
    else
        return (res + 1);
}