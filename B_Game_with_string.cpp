#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0;
    string s;
    cin >> s;
    stack<char> pilha;

    for(int i = 0; i < s.size(); i++)
    {
        if(!pilha.empty() && pilha.top() == s[i])
        {
            pilha.pop();
            ans++;
        }
        else
            pilha.push(s[i]);
    }
    if(ans % 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}