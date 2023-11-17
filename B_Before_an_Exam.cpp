#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sumTime, minTime, maxTime, total = 0;
    vector<int> ans;
    vector<pair<int,int>> minMax;
    cin >> n >> sumTime;
    for(int i = 0; i < n; i++)
    {
        cin >> minTime >> maxTime;
        total += maxTime;
        ans.push_back(maxTime);
        minMax.push_back({minTime,maxTime});
    }
    total -= sumTime;
    if(total < 0)
        cout << "NO";
    else
    {
        for(int i = n - 1; i >= 0 && total > 0; i--)
        {
            if(minMax[i].second - minMax[i].first < total)
            {
                total -= minMax[i].second - minMax[i].first;
                ans[i] -= minMax[i].second - minMax[i].first;
            }
            else
            {
                ans[i] -= total;
                total = 0;
            }
        }
        if(total)
            cout << "NO";
        else
        {
            cout << "YES\n";
            for(int i = 0; i < n; i++)
                cout << ans[i] << ' ';
        }
    }
}