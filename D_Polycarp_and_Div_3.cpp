#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int ans = 0, cont = 0, aux = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if((s[i] - '0') % 3 == 0)
        {
            ans++;
            cont = 0;
            aux = 0;
        }
        else
        {
            cont += (s[i] - '0');
            aux++;
            if(cont % 3 == 0 || aux == 3)
            {
                ans++;
                cont = 0;
                aux = 0;
            }
        }
    }
    cout << ans;
}