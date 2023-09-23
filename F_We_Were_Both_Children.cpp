#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n, aux;
        cin >> n;
        vector<int> stones(n+1, 0);
        vector<int> jumps;
        int cont[200010] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            if(aux <= n)
            {
                if(!cont[aux])
                    jumps.push_back(aux);
                cont[aux]++;
            }
        }
        for(int i = 0; i < jumps.size(); i++)
        {
            for(int j = jumps[i]; j <= n; j += jumps[i])
            {
                stones[j] += cont[jumps[i]];
            }
        }
        int maior = 0;
        for(int i = 1; i <= n; i++)
        {
            maior = max(maior, stones[i]);
        }
        cout << maior << endl;
    }
}