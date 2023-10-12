#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int total = 0, a, p, cost;
    cin >> a >> p;
    total += a * p;
    cost = p;
    while(--n)
    {
        cin >> a >> p;
        if(p >= cost)
            total += a * cost;
        else
        {
            cost = p;
            total += a * cost;
        }
    }
    cout << total << endl;
}