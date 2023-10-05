#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long int time = 0, a, b, n;
        cin >> a >> b >> n;
        time += b;
        for(int i = 0; i < n; i++)
        {
            cin >> b;
            if(b < a)
                time += b;
            else
                time += a - 1;
        }
        cout << time << endl;
    }
}