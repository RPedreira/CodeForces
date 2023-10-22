#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> letters(26, 0);
        string s;
        cin >> s;
        for(int i = 0; i < n; i++)
            letters[s[i] - 97]++;
        if((n - k) % 2)
        {
            k++;
            for(int i = 0; i < 26; i++)
            {
                if(letters[i] % 2)
                    k--;
            }
            if(k < 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            for(int i = 0; i < 26; i++)
            {
                if(letters[i] % 2)
                    k--;
            }
            if(k < 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}