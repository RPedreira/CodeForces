#include <bits/stdc++.h>
using namespace std;

long long int sum[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sum[0] = 0;
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        long long int aux;
        cin >> n >> q;
        for(int i = 1; i <= n; i++)
        {
            cin >> aux;
            sum[i] = aux + sum[i - 1];
        }
        for(int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            if(((r - l + 1) * k + sum[l - 1] + (sum[n] - sum[r])) % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}