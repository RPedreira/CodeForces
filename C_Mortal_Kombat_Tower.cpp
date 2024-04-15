#include <bits/stdc++.h>
using namespace std;
#define MAX 200010

int bosses[MAX];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, firstPlayer = 1, secondPlayer = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
      cin >> bosses[i];

    ans = bosses[0];
    for (int i = 1; i < n; i++) {
      if (i == n - 1 && bosses[i] && secondPlayer == 2) {
        ans++;
      } else if (bosses[i] && secondPlayer < 2) {
        secondPlayer++;
        firstPlayer = 0;
      } else if (bosses[i]) {
        ans++;
        firstPlayer;
        secondPlayer = 0;
      } else if (!bosses[i] && !bosses[i + 1] && secondPlayer < 2) {
        secondPlayer++;
        firstPlayer = 0;
      } else if (!bosses[i] && !bosses[i + 1]) {
        firstPlayer++;
        secondPlayer = 0;
      } else if (!bosses[i] && firstPlayer < 2) {
        firstPlayer++;
        secondPlayer = 0;
      } else {
        secondPlayer++;
        firstPlayer = 0;
      }
    }

    cout << ans << endl;
  }
}