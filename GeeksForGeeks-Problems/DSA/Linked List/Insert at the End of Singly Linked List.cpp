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

Node *temp = new Node(x);
if (head == NULL)
{
    return temp;
}
Node *curr = head;
while (curr->next != NULL)
{
    curr = curr->next;
}
curr->next = temp;
return head;