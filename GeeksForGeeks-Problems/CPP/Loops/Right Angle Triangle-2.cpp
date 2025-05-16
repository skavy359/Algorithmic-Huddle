void triangle(int s)
{
    for (int i = 1; i <= s; i++)
    {
        if (i == 1)
        {
            cout << "*";
            cout << endl;
        }
        else if (i == s)
        {
            for (int j = 0; j < s; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            int count = 2 * (i - 2) + 1;
            cout << "*";
            while ((count--) > 0)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
}