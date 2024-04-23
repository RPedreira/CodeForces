#include <bits/stdc++.h>
using namespace std;
#define MAX 500010

int n, target, a[MAX], sumPrefix[MAX] = {0};
vector<int> indexes[MAX];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> target;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    if (a[i] == target)
      sumPrefix[i] = sumPrefix[i - 1] + 1;
    else
      sumPrefix[i] = sumPrefix[i - 1];
    indexes[a[i]].push_back(i);
  }

  int bestInterval = 0;
  for (int i = 1; i <= MAX; i++) {
    if (i != target) {
      int maxInInterval = 0;
      for (int j = 0; j < indexes[i].size(); j++) {
        int r = indexes[i][j], l = (j == 0 ? 0 : indexes[i][j - 1]);
        int targetsRemovedInInterval = sumPrefix[r] - sumPrefix[l];

        maxInInterval = max(maxInInterval + 1 - targetsRemovedInInterval, 1);
        bestInterval = max(bestInterval, maxInInterval);
      }
    }
  }

  int targetsInArray = sumPrefix[n], ans = targetsInArray + bestInterval;

  cout << ans << endl;
}