class Solution
{
public:
    void utility(int x, int y)
    {
        // Perform addition x+y below
        int p = x + y;
        // Perform subtraction x-y below
        int q = x - y;
        // Perform multiplication x*y below
        int r = x * y;
        // Perform float division x/y below
        double s = static_cast<double>(x) / y;
        // Perform integer divison x//y below
        int t = x / y;
        // Perform modulo operation x%y below
        int u = x % y;
        // Perform power(x,y) x**y below
        long long int v = pow(x, y);

        // The below code prints the output. Don't change it!
        cout << fixed << setprecision(5) << p << " " << q << " " << r << " " << s << " " << t << " " << u << " " << v << "\n";
    }
};