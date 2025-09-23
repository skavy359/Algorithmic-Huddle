/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    // Your code here
    map<char, int> mp;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        mp[party[i]] = seats[i];
        if (seats[i] > maxi)
            maxi = seats[i];
    }
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << maxi << endl;
}