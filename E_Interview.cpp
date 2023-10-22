#include <bits/stdc++.h>
using namespace std;

int piles[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    piles[0] = 0;
    int t;
    cin >> t;
    while(t--)
    {
        int n, aux;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> aux;
            piles[i] = piles[i - 1] + aux;
        }
        int ini = 1, fim = n, meio, fb;
        while(ini != fim)
        {
            meio = (ini + fim) / 2;
            cout << "? " << (meio - ini) + 1;
            for(int i = ini; i <= meio; i++)
                cout << ' ' << i;
            cout << "\n\n";
            cout.flush();
            cin >> fb;
            if(fb != (piles[meio] - piles[ini - 1]))
                fim = meio;
            else
                ini = meio + 1;
        }
        cout << "! " << ini << "\n\n";
        cout.flush();
    }
}