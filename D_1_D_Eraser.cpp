#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k, total = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B')
            {
                total++;
                i += k - 1;
            }
        }
        cout << total << endl;
    }
}