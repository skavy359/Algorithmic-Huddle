int LCM(int a, int b)
{
    int high = max(a, b);
    for (int i = high; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}