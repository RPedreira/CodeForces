#include <bits/stdc++.h>
using namespace std;

int mod[5] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        mod[0] = 0;
        mod[1] = 0;
        mod[2] = 0;
        mod[3] = 0;
        mod[4] = 0;
        int n, k, aux;
        bool divisible = false;
        cin >> n >> k;
        if(k == 2)
        {
            for(int i = 0; i < n; i++)
            {
                cin >> aux;
                mod[aux % k]++;
            }
            if(mod[0])
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
        else if(k == 3)
        {
            for(int i = 0; i < n; i++)
            {
                cin >> aux;
                mod[aux % k]++;
            }
            if(mod[0])
                cout << 0 << endl;
            else if(mod[2])
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if(k == 4)
        {
            for(int i = 0; i < n; i++)
            {
                cin >> aux;
                mod[aux % k]++;
            }
            if(mod[0] || mod[2] >= 2)
                cout << 0 << endl;
            else if(mod[3] || (mod[1] && mod[2]))
                cout << 1 << endl;
            else if(mod[1] >= 2 || mod[2])
                cout << 2 << endl;
            else
                cout << 3 << endl;
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                cin >> aux;
                mod[aux % k]++;
            }
            if(mod[0])
                cout << 0 << endl;
            else if(mod[4])
                cout << 1 << endl;
            else if(mod[3])
                cout << 2 << endl;
            else if(mod[2])
                cout << 3 << endl;
            else
                cout << 4 << endl;
        }
    }
}