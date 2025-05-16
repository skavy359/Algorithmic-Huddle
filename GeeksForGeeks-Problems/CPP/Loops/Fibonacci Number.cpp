int fibonacci(int n)
{

    // Write your code here to calculate
    // to calculate the nth fibonacci number
    int a = 1;
    int b = 1;
    int c;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}