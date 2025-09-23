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
if (head == NULL)
    return NULL;

Node *temp = head->next;
delete head;
return temp;