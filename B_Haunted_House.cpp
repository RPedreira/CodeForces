#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n, sum = 0, qtdZero = 0;
        bool one = false;
        string s;
        cin >> n >> s;
        for(long long int i = n - 1, j = 0; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                sum += (n - j++) - (i + 1);
                cout << sum << ' ';
                qtdZero++;
            }
        }
        for(int i = qtdZero; i < n; i++)
        {
            cout << "-1 ";
        }
        cout << endl;
    }
}