/*
class Node {
  public:
    int data;
    Node *prev;
    Node *next;

    Node(int x) {
        data = x;
        next = prev = NULL;
    }
};
*/

Node *temp = new Node(data);
if (head == NULL)
    return temp;
Node *curr = head;
while (curr->next != NULL)
{
    curr = curr->next;
}
curr->next = temp;
temp->prev = curr;
return head;