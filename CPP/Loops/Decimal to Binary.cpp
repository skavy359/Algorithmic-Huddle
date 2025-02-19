void toBinary(int n)
{
    // your code here
    int ans = 0, i = 0;
    while (n > 0)
    {
        int rem = n % 2;
        ans = ans + rem * pow(10, i);
        n /= 2;
        i++;
    }
    cout << ans;
}