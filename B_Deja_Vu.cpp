#include <bits/stdc++.h>
using namespace std;

long long int exp(long long int x, long long int n)
{
    if(n == 0)  return 1;

    int t = exp(x, n / 2);
    if(n%2 == 1) return x*t*t;
    return t*t;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        long long int aux;
        vector<long long int> a;
        vector<long long int> x;
        x.push_back(31);
        cin >> n >> q;
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            a.push_back(aux);
        }
        for(int i = 0; i < q; i++)
        {
            cin >> aux;
            if(aux < x.back())
                x.push_back(aux);
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0)
            {
                for(int j = 1; j < x.size(); j++)
                {
                    if(x[j] != 1)
                    {
                        long long int pot = exp(2, x[j]);
                        if(a[i] % pot == 0)
                            a[i] += (pot / 2);
                    }
                    else
                        a[i] += 1;
                }
            }   
        }
        for(int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
    }
}