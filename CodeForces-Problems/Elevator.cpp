#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    string s;
    int a;
    fin >> s >> a;

    if (s == "front")
    {
        if (a == 1)
            fout << "L" << endl;
        else
            fout << "R" << endl;
    }
    else if (s == "back")
    {
        if (a == 1)
            fout << "R" << endl;
        else
            fout << "L" << endl;
    }

    fin.close();
    fout.close();
    return 0;
}