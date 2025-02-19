void square(int s)
{
    // code here
    for (int i = 1; i <= s; i++)
    {
        if (i == 1 || i == s)
        {
            for (int j = 0; j < s; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            cout << "*";
            int count = 2 * (s - 2) + 1;
            while (count-- > 0)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
}