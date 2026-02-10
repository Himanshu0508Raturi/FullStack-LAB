#include <bits/stdc++.h>
using namespace std;

string caesarCipher(string s, int k)
{
    int n = s.size();
    string ans;
    while (k >= 26)
    {
        k %= 26;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] += k;
            if (s[i] >= 122)
            {
                s[i] = s[i] % 122 + 96;
            }
        }
        else if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += k;
            if (s[i] >= 90)
            {
                s[i] = s[i] % 90 + 64;
            }
        }
        ans += s[i];
    }
    return ans;
}
int main()
{
    string s;
    int k;
    cin >> s >> k;
    cout << caesarCipher(s, k) << endl;
    return 0;
}