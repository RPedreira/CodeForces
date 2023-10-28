#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s, t;
        t = "01";
        cin >> n >> s;
        if(n % 2)
            cout << "-1\n";
        else
        {
            int cont0 = 0, cont1 = 0;
            for(int i = 0; i < n; i++)
            {
                if(s[i] == '0')
                    cont0++;
                else
                    cont1++;
            }
            if(cont0 != cont1)
                cout << "-1\n";
            else
            {
                vector<int> index;
                for(int i = 0, j = n - 1; i < n / 2 && index.size() <= 300; i++)
                {
                    if(s[i] == s[j] && s[i] == '0')
                    {
                        index.push_back(j + 1);
                        s.insert(j + 1, t);
                        j++;
                        n += 2;
                    }
                    else if(s[i] == s[j])
                    {
                        index.push_back(i);
                        s.insert(i, t);
                        j++;
                        n += 2;
                    }
                    else
                        j--;
                }
                if(index.size() > 300)
                    cout << "-1\n";
                else
                {
                    cout << index.size() << endl;
                    for(int i = 0; i < index.size(); i++)
                        cout << index[i] << ' ';
                    cout << endl;
                }
            }
        }
    }
}