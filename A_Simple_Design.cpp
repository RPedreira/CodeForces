#include <bits/stdc++.h>
using namespace std;

long long int soma(long long int x)
{
    int total = 0;
    while(x)
    {
        total += x % 10;
        x /= 10;
    }
    return total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while(t--)
    {
        long long int x, k, digits, pot = 10;
        cin >> x >> k;
        digits = soma(x);
        if(digits % k == 0)
            cout << x << endl;
        else
        {
            digits = k - (digits % k);
            if((x % 10) + digits < 10)
                x += digits;
            else
            {
                x += (10 - (x % 10));
                digits = soma(x);
                if(digits % k)
                {
                    digits = k - (digits % k);
                    x += digits;
                }
            } 
            cout << x << endl;
        }
    }
}