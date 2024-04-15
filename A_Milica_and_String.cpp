#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k, b = 0;
        string s;
        cin >> n >> k >> s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B')
                b++;
        }
        if(b == k)
            cout << 0 << endl;
        else if(b < k)
        {
            for(int i = 0; i < n && b < k; i++)
            {
                if(s[i] == 'A')
                    b++;
                if(b == k)
                    cout << 1 << endl << i + 1 << " B" << endl;
            }
        }
        else
        {
            for(int i = 0; i < n && b > k; i++)
            {
                if(s[i] == 'B')
                    b--;
                if(b == k)
                    cout << 1 << endl << i + 1 << " A" << endl;
            }
        }
    }
}