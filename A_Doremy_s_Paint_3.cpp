#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, aux;
        cin >> n;
        vector<int> seq;
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            seq.push_back(aux);
        }
        if(n == 2)
            cout << "Yes\n";
        else if(n == 3)
        {
            if(seq[0] == seq[1] || seq[0] == seq[2] || seq[1] == seq[2])
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
        {
            bool flag = false;
            int number1, number2;
            sort(seq.begin(), seq.end());
            if(seq[0] == seq[n - 1])
                cout << "Yes\n";
            else
            {
                bool flag = true;
                int number1 = seq[0], number2 = seq[n - 1];
                for(int i = 0, j = n - 1; i < (n / 2) && flag; i++, j--)
                {
                    if(number1 != seq[i] || number2 != seq[j])
                        flag = false;
                }

                if(flag && (seq[n / 2] == number1 || seq[n / 2] == number2))
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
        }
    }
}