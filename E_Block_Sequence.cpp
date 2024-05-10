#include <bits/stdc++.h>
using namespace std;
#define MAX 200001

int seq[MAX], dp[MAX];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> seq[i];
    dp[n] = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (seq[i] + i >= n)
        dp[i] = dp[i + 1] + 1;
      else
        dp[i] = min(dp[i + 1] + 1, dp[i + seq[i] + 1]);
    }
    cout << dp[0] << endl;
  }
}