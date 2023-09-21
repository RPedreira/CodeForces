#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--)
    {
        int t;
        vector<int> seq;
        cin >> t;
        while(t--)
        {
            int aux;
            cin >> aux;
            seq.push_back(aux);
        }
        sort(seq.begin(), seq.end());
        seq[0]++;
        int total = 1;
        for(int i = 0; i < seq.size(); i++)
            total *= seq[i];
        cout << total << endl;
    }
}