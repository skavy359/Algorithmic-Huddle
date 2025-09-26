// User function Template for C++

// list: remove from front of list provided
void removeFromFront(forward_list<int> &list)
{
    // your code here
    list.pop_front();
}

// list: remove elements after given iteraring position
// x: is the iterating position after which you have to remove
//    from list
void removeAfter(forward_list<int> &list, int x)
{
    auto it = list.begin();
    for (int i = 1; i < x && it != list.end(); i++)
    {
        it++;
    }
    list.erase_after(it);
    // your code here
}

// list: remove elements from list from range given
// start: starting position of the range
// end: end position of the range

void removeFromInRange(forward_list<int> &list, int start, int end)
{
    // your code here
    auto it1 = list.begin();
    for (int i = 1; i < start && it1 != list.end(); i++)
    {
        it1++;
    }
    auto it2 = list.begin();
    for (int i = 1; i < end && it2 != list.end(); i++)
    {
        it2++;
    }
    list.erase_after(it1, it2);
}

// list: remove all elements from the list
void removeAll(forward_list<int> &list)
{
    // your code here
    list.clear();
}
