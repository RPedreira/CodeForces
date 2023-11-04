#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, aux, ans = 0;
        cin >> n;
        vector<int> seq;
        vector<pair<int, int>> pares;
        for(int i = 0; i < 2 * n; i++)
        {
            cin >> aux;
            seq.push_back(aux);
        }
        sort(seq.begin(), seq.end());
        for(int i = 1; i < n; i++)
        {
            ans += (seq[i] - seq[i - 1]);
            ans += (seq[i + n] - seq[i + n - 1]);
            pares.push_back({seq[i - 1], seq[i + n - 1]});
        }
        pares.push_back({seq[n - 1], seq[(2 * n) - 1]});
        cout << ans << endl;
        for(int i = 0; i < n; i++)
            cout << pares[i].first << ' ' << pares[i].second << endl;
    }
}