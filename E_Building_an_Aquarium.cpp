#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, x, corais = 0, height, aux, total;
        cin >> n >> x;
        vector<int> seq;
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            seq.push_back(aux);
            corais += aux;
        }
        sort(seq.begin(), seq.end());
        height = seq[n-1];
        total = (n * height) - corais;
        aux = n - 1;
        while(total > x)
        {
            height = seq[--aux];
            corais -= seq[aux + 1];
            n--;
            total = (n * height) - corais;
        }
        if(total < x)
        {
            height += (x - total) / (aux + 1);
        }
        cout << height << endl;
    }
}