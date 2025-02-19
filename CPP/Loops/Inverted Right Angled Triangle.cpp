void invTriangleWall(int s)
{

    // Write your code here
    for (int i = 1; i <= s; i++)
    {
        for (int j = s - i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}