/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *head, int data, int position)
{
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    if (position == 1)
    {
        temp->next = head;
        return temp;
    }
    SinglyLinkedListNode *curr = head;
    for (int i = 0; i < position - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
