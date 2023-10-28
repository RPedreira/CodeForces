#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        bool flag = true;
        for(int i = 0; i < n - 1 && flag; i++)
        {
            if(s[i] == s[i + 1])
            {
                for(int j = 0; j < m - 1 && flag; j++)
                {
                    if(t[j] == t[j + 1])
                        flag = false;
                }
                if(t[0] == s[i] || t[m - 1] == s[i + 1])
                    flag = false;
            }
        }
        if(flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}