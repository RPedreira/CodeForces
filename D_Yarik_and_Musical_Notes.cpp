#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long int n, aux, ans = 0;
        cin >> n;
        map<long long int, long long int> hash;
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            if(aux == 1 || aux == 2)
                hash[1]++;
            else
                hash[aux]++;
        }
        for(auto e : hash)
        {
            if(e.second == 2)
                ans++;
            else if(e.second > 2)
                ans += (e.second * (e.second - 1)) / 2;
        }
        cout << ans << endl;
    }
}