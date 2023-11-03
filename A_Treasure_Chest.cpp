#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if(y <= x)
            cout << x << endl;
        else if(x + k >= y)
            cout << y << endl;
        else
            cout << x + k + ((y - (x + k)) * 2) << endl;
    }
}