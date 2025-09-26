// User function Template for C++

list<int> l;

// inserts an integer at the end of the data structure.
void insert(int x)
{
    l.push_back(x);
}

// prints the element of the data structure
// the new line is given by the driver's code
void print()
{
    // print the list
    for (auto x : l)
        cout << x << " ";
    cout << endl;
}

// replaces the first occurence of x with
// sequence.
void replace(int x, vector<int> sequence)
{
    auto it = l.begin();
    for (it; it != l.end(); it++)
    {
        if ((*it) == x)
        {
            it = l.erase(it);
            break;
        }
    }
    l.insert(it, sequence.begin(), sequence.end());
}