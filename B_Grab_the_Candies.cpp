#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, sumMihai = 0, sumBianca = 0, aux;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            if(aux % 2)
                sumBianca += aux;
            else
                sumMihai += aux;
        }
        if(sumMihai > sumBianca)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}