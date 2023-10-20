#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a ,b;
    cin >> n >> m;
    vector<int> degree(n + 1, 0);
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        degree[a]++;
        degree[b]++;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    degree[0] = INT_MAX;
    int lowest = 0;
    for(int i = 1; i <= n; i++)
    {
        if(degree[i] < degree[lowest])
            lowest = i;
    }
    degree[lowest] = -1;
    for(auto it : adj[lowest])
        degree[it] = -1;
    
    for(int i = 1; i <= n; i++)
    {
        if(degree[i] < 0)
            cout << "0 ";
        else
            cout << "1 ";
    }
}