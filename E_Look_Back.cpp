#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long int n, previous, now, potPrev = 0, potNow, aux1, aux2, ans = 0;
        cin >> n >> previous;
        if(n > 1)
        {
            for(int i = 1; i < n; i++)
            {
                cin >> now;
                potNow = potPrev;
                aux1 = previous;
                aux2 = now;
                if(previous <= now)
                {
                    while(aux1 * 2 <= aux2 && potNow)
                    {
                        aux1 *= 2;
                        potNow--;
                    }
                }
                else
                {
                    while(aux2 < aux1)
                    {
                        aux2 *= 2;
                        potNow++;
                    }
                }
                ans += potNow;
                potPrev = potNow;
                previous = now;
            }
        }
        cout << ans << endl;
    }
}