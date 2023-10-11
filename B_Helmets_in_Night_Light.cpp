#include <bits/stdc++.h>
using namespace std;

pair<long long int, long long int> vet[100000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long int n, p;
        long long int ans = 0;
        cin >> n >> p;
        for(int i = 0; i < n; i++)
            cin >> vet[i].second;
        for(int i = 0; i < n; i++)
            cin >> vet[i].first;
        sort(vet, vet + n);
        int index = 0, cont = 0;
        ans += p;
        n--;
        while(n)
        {
            if(vet[index].first <= p)
            {
                if(n > vet[index].second)
                {
                    ans += vet[index].first * vet[index].second;
                    n -= vet[index].second;
                    index++;
                }
                else
                {
                    ans += vet[index].first * n;
                    n = 0;
                }
            }
            else
            {
                ans += n * p;
                n = 0;
            }
        }
        cout << ans << endl;
    }
}