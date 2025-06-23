// User function Template for C++

// Complete the function
void ShrinkMe(vector<int> myvector, int newsize)
{

    // Your code here

    // Use shrink_to_fit function
    // Write here
    cout << myvector.capacity();
    cout << endl;
    myvector.resize(newsize);
    myvector.shrink_to_fit();
    cout << myvector.capacity();
}
