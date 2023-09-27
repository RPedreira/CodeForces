#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> letras(26, -1);
        bool flag = true;
        for(int i = 0; i < n && flag; i++)
        {
            if(letras[s[i] - 97] == -1 && i % 2 == 0)
            {
                letras[s[i] - 97] = 0;
            }
            else if(letras[s[i] - 97] == -1 && i % 2)
            {
                letras[s[i] - 97] = 1;
            }
            else if(letras[s[i] - 97] != i % 2)
                flag = false;
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}