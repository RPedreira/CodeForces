#include <bits/stdc++.h>
using namespace std;
#define MAX 200001

int dist[MAX], dp[MAX];

void bfs(vector<vector<int>> &graph) {
  queue<int> q;
  q.push(1);
  dist[1] = 0;

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v : graph[u]) {
      if (dist[v] == -1) {
        dist[v] = dist[u] + 1;
        q.push(v);
      }
    }
  }
}

void solve(vector<vector<int>> &graph, int node) {
  dp[node] = dist[node];
  for (int v : graph[node]) {
    if (dp[v] == INT_MAX && dist[node] < dist[v])
      solve(graph, v);
    if (dist[node] < dist[v])
      dp[node] = min(dp[node], dp[v]);
    else
      dp[node] = min(dp[node], dist[v]);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);

    for (int i = 1; i <= m; i++) {
      int u, v;
      cin >> u >> v;
      graph[u].push_back(v);
      dist[u] = dist[v] = -1;
      dp[u] = dp[v] = INT_MAX;
    }

    bfs(graph);

    solve(graph, 1);

    for (int i = 1; i <= n; i++) {
      if (i == n)
        cout << dp[i] << endl;
      else
        cout << dp[i] << " ";
    }
  }
}