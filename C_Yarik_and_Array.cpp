#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, ans, soma = 0, aux;
        cin >> n;
        vector<int> seq;
        cin >> aux;
        if(aux <= 0)
            ans = aux;
        else
        {
            soma += aux;
            ans = aux;
        }
        seq.push_back(aux % 2);
        for(int i = 1; i < n; i++)
        {
            cin >> aux;
            if(seq.back() == abs(aux) % 2)
                soma = 0;
            if(soma + aux <= 0)
            {
                soma = 0;
                ans = max(ans, aux);
            }
            else
            {
                soma += aux;
                ans = max(ans, soma);
            }
            seq.push_back(abs(aux) % 2);
        }
        cout << ans << endl;
    }
}