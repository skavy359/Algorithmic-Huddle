class Solution
{
public
    ArrayList<Integer> quadraticRoots(int a, int b, int c)
    {
        // code here
        ArrayList<Integer> ans = new ArrayList<Integer>();
        double d = (b * b) - (4 * a * c);
        if (d < 0)
        {
            ans.add(-1);
            return ans;
        }
        else
        {
            double l = Math.sqrt(d);
            double a1 = (-b + l) / (2.0 * a);
            double a2 = (-b - l) / (2.0 * a);
            int r1 = (int)Math.floor(a1);
            int r2 = (int)Math.floor(a2);
            if (r1 < r2)
            {
                ans.add(r2);
                ans.add(r1);
            }
            else
            {
                ans.add(r1);
                ans.add(r2);
            }
        }
        return ans;
    }
}