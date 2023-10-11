#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0, aux;
        cin >> n;
        for(int i = 1; i < n; i++)
        {
            cin >> aux;
            ans += aux;
        }
        cout << (-1) * ans << endl;
    }
}