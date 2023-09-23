#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int a, b, aux;
        cin >> a >> b;
        vector<int> seq;
        for(int i = 0; i < a; i++)
        {
            cin >> aux;
            seq.push_back(aux);
        }
        sort(seq.begin(), seq.end());
        int i = 0, j = 1, lis = 1;
        while(j < a)
        {
            if(seq[j] - seq[j - 1] <= b)
            {
                lis = max(lis, j - i + 1);
                j++;
            }
            else
            {
                i = j;
                j++;
            }
        }
        cout << a - lis << endl;
    }
}