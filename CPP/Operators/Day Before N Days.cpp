int nthDay(int d, int n)
{

    // write your code here
    if (n <= d)
    {
        return d - n;
    }
    else
    {
        int temp = abs((d - n) % 7);
        return 7 - temp;
    }
}