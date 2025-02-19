int countDigits(int n)
{

    // write your code here
    // return number of digits in n
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}