#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, x, y, sum = 0;
        cin >> n >> x >> y;
        long long int up = n, down = 1, ceilx = floor(n/x) * x, ceily = floor(n/y) * y;
        long long int equals, divx = (ceilx - 1) / x, divy = (ceily - 1) / y;
        if(max(x, y) % min(x, y) == 0)
            equals = n / max(x, y);
        else
            equals = n / ((x * y) / __gcd(x, y));
        divx++;
        divy++;
        divy -= equals;
        divx -= equals;
        
        sum += ((up + (up - divx + 1)) * divx) / 2;
        sum -= ((down + (down + divy - 1)) * divy) / 2;
        cout << sum << endl;
    }
}