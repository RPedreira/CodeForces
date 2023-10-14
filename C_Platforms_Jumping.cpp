#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, d, aux = 0, cont = 0, tabuas = 0;
    cin >> n >> m >> d;
    vector<int> platforms(m);
    for(int i = 0; i < m; i++)
    {
        cin >> platforms[i];
        aux += (platforms[i] - 1);
        tabuas += platforms[i];
    }
    aux += d * (m + 1);
    if(aux <= n)
    {
        cout << "NO" << endl;
    }
    else
    {
        int i;
        cout << "YES" << endl;
        tabuas = n - tabuas;
        for(i = 0; i < m && tabuas; i++)
        {
            for(int j = 1; j < d && tabuas; j++)
            {
                cout << 0 << ' ';
                tabuas--;
                cont++;
            }
            while(platforms[i] > 0)
            {
                cout << i + 1 << ' ';
                platforms[i]--;
                cont++;
            }
        }
        for(;i < platforms.size() && cont <= n; i++)
            while(platforms[i] > 0)
            {
                cout << i + 1 << ' ';
                platforms[i]--;
                cont++;
            }
        while(cont < n)
        {
            cout << 0 << ' ';
            cont++;
        }
    }
}