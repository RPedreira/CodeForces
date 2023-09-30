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
        vector<pair<int, int>> traps;
        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            traps.push_back({a,b});
        }
        sort(traps.begin(), traps.end());
        int lim = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(traps[i].second % 2)
                lim = min(lim, traps[i].first + (traps[i].second / 2));
            else
                lim = min(lim, traps[i].first + (traps[i].second / 2) - 1);
        }
        cout << lim << endl;
    }
}