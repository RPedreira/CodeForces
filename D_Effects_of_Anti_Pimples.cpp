#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<long long int, int>> dp(n + 1);
    dp[0] = {-1,0};

    for(int i = 1; i <= n; i++)
    {
        cin >> dp[i].first;
        dp[i].second = i;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 2 * i; j <= n; j+= i)
        {
            dp[i].first = max(dp[i].first, dp[j].first);
        }
    }
    sort(dp.begin(), dp.end());
    long long int pot = 1, ans = 0, mod = 998244353;
    ans += dp[1].first % mod;
    for(int i = 2; i <= n; i++)
    {
        pot = ((pot % mod) * (2 % mod)) % mod;
        ans = ((ans % mod) + (((dp[i].first % mod) * pot) % mod)) % mod;
    }
    cout << ans << endl;
}