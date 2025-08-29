class Solution
{
public:
    string categorizeBox(int length, int width, int height, int mass)
    {
        long long int volume = (long)length * width * height;
        bool bulky = false, heavy = false;
        if (volume >= 1000000000 || length >= 10000 || width >= 10000 || height >= 10000)
            bulky = true;
        if (mass >= 100)
            heavy = true;
        if (bulky && heavy)
            return "Both";
        else if (!bulky && !heavy)
            return "Neither";
        else if (bulky && !heavy)
            return "Bulky";
        else if (heavy && !bulky)
            return "Heavy";
        return "";
    }
};