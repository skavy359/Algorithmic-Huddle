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
temp->next = head;
head->prev = temp;
return temp;