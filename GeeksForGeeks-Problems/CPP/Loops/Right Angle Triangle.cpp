void triangleWall(int s)
{
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}