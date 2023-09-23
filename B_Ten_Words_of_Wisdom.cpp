#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int responses, max = 0, index = 0, a ,b;
        cin >> responses;
        for(int i = 1; i <= responses; i++)
        {
            cin >> a >> b;
            if(a <= 10 && b > max)
            {
                max = b;
                index = i;
            }
        }
        cout << index << endl;
    }
}