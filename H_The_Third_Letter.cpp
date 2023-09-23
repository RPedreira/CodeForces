#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pos[200010] = {0};
bool vis[200010] = {0};

void dfs(vector<vector<pair<ll,ll>>> &adj, int vertex){
    vis[vertex] = true;
    for(auto x : adj[vertex])
    {
        int dest = x.first, dist = x.second;
        if(!vis[dest])
        {
            pos[dest] = pos[vertex] + dist;
            dfs(adj, dest);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            pos[i] = 0;
            vis[i] = false;
        }
        vector<vector<pair<ll, ll>>> adj(n + 1);
        vector<array<ll, 3>> cond;
        for(int i = 0; i < m; i++)
        {
            int a, b;
            ll c;
            cin >> a >> b >> c;
            adj[a].push_back({b,c});
            adj[b].push_back({a,-c});
            cond.push_back({a, b, c});
        }
        for(int i = 1; i <= n; i++)
        {
            if(!vis[i])
                dfs(adj, i);
        }
        bool flag = true;
        for(int i = 0; i < m && flag; i++)
        {
            int a = cond[i][0], b = cond[i][1];
            ll c = cond[i][2];
            if(pos[a] + c != pos[b])
            {
                flag = false;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}