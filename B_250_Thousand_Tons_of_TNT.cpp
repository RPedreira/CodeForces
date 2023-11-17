#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long int aux, ans = 0;
        cin >> n;
        vector<long long int> seq;
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            seq.push_back(aux);
        }
        for(int i = 1; 2 * i <= n; i++)
        {
            if(n % i == 0)
            {
                long long int soma = 0, menor = LLONG_MAX, maior = 0, cont = 0;
                for(int j = 0; j < n; j++)
                {
                    soma += seq[j];
                    cont++;
                    if(cont == i)
                    {
                        menor = min(menor, soma);
                        maior = max(maior, soma);
                        cont = 0;
                        soma = 0;
                    }
                }
                ans = max(ans, maior - menor);
            }
        }
        cout << ans << endl;
    }
}