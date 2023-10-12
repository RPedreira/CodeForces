#include <bits/stdc++.h>
using namespace std;

int vet[3];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cin >> vet[0] >> vet[1] >> vet[2];
        sort(vet, vet + 3);
        if(vet[0] == vet[1] && vet[0] == vet[2])
            cout << "YES" << endl;
        else if(vet[0] == vet[1])
        {
            if(vet[2] == 2 * vet[0] || vet[2] - vet[0] == 2 * vet[0] || vet[2] == 4 * vet[0])
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
        else if(vet[1] == vet[2])
        {
            if(2 * vet[0] == vet[1])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if(2 * vet[0] == vet[1] && vet[2] == 3 * vet[0])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}