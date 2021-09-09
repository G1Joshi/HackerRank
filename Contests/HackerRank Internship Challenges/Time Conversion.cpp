#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s)
{
    if (s[8] == 'P' && !(s[0] == '1' && s[1] == '2'))
    {
        s[0] += 1;
        s[1] += 2;
    }
    else if (s[8] == 'A' && s[0] == '1' && s[1] == '2')
    {
        s[0] = '0';
        s[1] = '0';
    }
    return s.substr(0, 8);
}

int main()
{
    string s;
    cin >> s;
    cout << timeConversion(s);
    return 0;
}
