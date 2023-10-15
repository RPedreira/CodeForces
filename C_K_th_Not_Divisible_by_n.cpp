#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if(k % (n - 1))
            cout << n * (k / (n - 1)) + (k % (n - 1)) << endl;
        else
            cout << n * (k / (n - 1)) - 1 << endl;
    }
}