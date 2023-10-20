#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int p, mod;
    cin >> p;
    vector<vector<long long int>> mods(p);
    for(long long int i = 0; i < p; i++)
    {
        mod = (i * i) % p;
        mods[mod].push_back(i);
    }
    for(int i = 0; i < p; i++)
    {
        if(mods[i].empty())
            cout << "-1 ";
        else
            cout << mods[i][0] << ' ';
    }
}