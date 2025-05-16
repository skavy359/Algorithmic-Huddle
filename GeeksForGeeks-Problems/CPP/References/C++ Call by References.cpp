void reverse_dig(int &a, int &b)
{
    // Add your code here.
    int reverse_a = 0;
    int reverse_b = 0;
    while (a > 0)
    {
        reverse_a = reverse_a * 10 + (a % 10);
        a = a / 10;
    }
    while (b > 0)
    {
        reverse_b = reverse_b * 10 + (b % 10);
        b = b / 10;
    }
    a = reverse_a;
    b = reverse_b;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}