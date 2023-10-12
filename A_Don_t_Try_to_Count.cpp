#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long int ans = 0;
        int n, m;
        string x, s;
        cin >> n >> m;
        cin >> x >> s;

        int aux = x.find(s);
        while(aux < 0)
        {
            x += x;
            ans++;
            aux = x.find(s);
            if(x.size() > 25)
                break;
        }
        if(aux < 0)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}